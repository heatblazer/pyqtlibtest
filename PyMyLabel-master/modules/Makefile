TARGET = PyMyLabel.so
OFILES = sipPyMyLabelcmodule.o sipPyMyLabelMyLabel.o
HFILES = sipAPIPyMyLabel.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DMYLABEL_LIBRARY -DQT_CORE_LIB -DQT_GUI_LIB -DQT_WIDGETS_LIB -I. -I/home/ilian/git-projects/pyqtlibtest/PyMyLabel-master/src -I/home/ilian/opt/Qt5.7.1/5.7/gcc_64/include -I/home/ilian/git-projects/prosfitdesktop/include/python3.4m -I/usr/include/python3.4m
CFLAGS = -pipe -fPIC -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -O2 -Wall -W
LFLAGS = -shared -Wl,-rpath,/home/ilian/opt/Qt5.7.1/5.7/gcc_64/lib -Wl,--version-script=PyMyLabel.exp
LIBS = -L/home/ilian/opt/Qt5.7.1/5.7/gcc_64/lib -L../src -lMyLabel
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_PyMyLabel; local: *; };' > PyMyLabel.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)PyMyLabel || mkdir -p $(DESTDIR)PyMyLabel
	cp -f $(TARGET) $(DESTDIR)PyMyLabel/$(TARGET)
	strip $(DESTDIR)PyMyLabel/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f sipPyMyLabelcmodule.o
	-rm -f sipPyMyLabelMyLabel.o
	-rm -f PyMyLabel.exp
