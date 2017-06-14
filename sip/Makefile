TARGET = test.so
OFILES = siptestcmodule.o siptestTest.o
HFILES = sipAPItest.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_GUI_LIB -I. -I/usr/include/python3.4m -I/usr/lib64/qt4/mkspecs/default -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -g -pipe -Wall -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2  -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -m64 -mtune=generic -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -g -pipe -Wall -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2  -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -m64 -mtune=generic -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared  -Wl,-O1 -Wl,-z,relro -specs=/usr/lib/rpm/redhat/redhat-hardened-ld -Wl,--version-script=test.exp
LIBS = -L/usr/lib64 -L/usr/X11R6/lib -ltest -lQtCore -lQtGui -lQtCore -lXext -lX11 -lm -lpthread
MOC = /usr/lib64/qt4/bin/moc
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
	@echo '{ global: PyInit_test; local: *; };' > test.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib64/python3.4/site-packages || mkdir -p $(DESTDIR)/usr/lib64/python3.4/site-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib64/python3.4/site-packages/$(TARGET)
	@test -d $(DESTDIR)/usr/share/python3-sip/test || mkdir -p $(DESTDIR)/usr/share/python3-sip/test
	cp -f test.sip $(DESTDIR)/usr/share/python3-sip/test/test.sip
	@test -d $(DESTDIR)/usr/lib64/python3.4/site-packages || mkdir -p $(DESTDIR)/usr/lib64/python3.4/site-packages
	cp -f testconfig.py $(DESTDIR)/usr/lib64/python3.4/site-packages/testconfig.py

clean:
	-rm -f $(TARGET)
	-rm -f siptestcmodule.o
	-rm -f siptestTest.o
	-rm -f test.exp
