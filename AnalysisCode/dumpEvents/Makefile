WORKDIR=./
EXECNAME=$(shell basename `pwd`).exe

ARCH=$(shell root-config --arch)
INCS = -Iinclude -I../include -I$(ROOTSYS)/include

# Cygwin
ifeq ($(ARCH),win32gcc)
# Windows with gcc
DllSuf        = dll
CXX           = g++
CFLAGS        = -O2 -Wall -Woverloaded-virtual -I/usr/X11R6/include 
LD            = g++
LDFLAGS       = -O2 -Wl,--enable-auto-import
SOFLAGS       = -shared -D_DLL -Wl,--export-all-symbols
EXPLLINKLIBS  = $(ROOTLIBS) $(ROOTGLIBS)
endif

# KAI compiler
ifeq ($(ARCH),linuxkcc)
CXX = KCC
CFLAGS  = +K1 -g -fpic $(shell root-config --cflags) $(INCS)
LD  = KCC
LDFLAGS = --no_exceptions 
BINTYPE=$(BFARCH)
SOEXT=so
ROOTLIB=$(ROOTSYS)/Linux+2.4/lib
endif

# Linux with gcc 3.4.3
ifeq ($(ARCH),linux)
CXX=g++
CFLAGS= -g -pipe -Wall -W -Woverloaded-virtual -fPIC -D__REGEXP -DG__UNIX -DG__SHAREDLIB -DG__ROOT -DG__REDIRECTIO -DG__OSFDLL $(shell root-config --cflags) $(INCS)
LD=g++
LDFLAGS= -g
BINTYPE=$(BFARCH)
SOEXT=so
ROOTLIB=$(ROOTSYS)/lib
endif


# MacOS X 10.4.5 (gcc 4.0)
ifeq ($(ARCH),macosx)
ifndef MACOSX_DEPLOYMENT_TARGET
$(error You must define MACOSX_DEPLOYMENT_TARGET first, e.g. "export MACOSX_DEPLOYMENT_TARGET=10.4")
endif
MACOSX_DEPLOYMENT_TARGET = 10.4
DllSuf            = dylib
CXX               = g++
CFLAGS            = -g -pipe -W -Wall -Woverloaded-virtual -fsigned-char -fno-common -D__REGEXP -DG__UNIX -DG__SHAREDLIB -DG__ROOT -DG__REDIRECTIO -DG__OSFDLL
LD                = g++
LDFLAGS           = -g -flat_namespace
ROOTLIB=$(ROOTSYS)/lib
endif

LIBDIR=../shlib/

ROOTLIBS=$(shell root-config --glibs)
FCNCLIBS=-L$(LIBDIR) -lCLPClasses -lRootFileCollection -lAnalysisNamespace

# Compile with TSam or not
ifndef NO_CDF_SAM
# With TSam (NO_CDF_SAM is NOT defined)
CFLAGS += -D__NO_CDFSOFT__ $(INCS)
SAMLIBS=-L$(DISKCACHE_I_DIR)/lib -ldiskcache_samroot -L$(SAM_CPP_API_DIR)/lib/so -lsam_cpp_api
else
# Without TSam  (NO_CDF_SAM IS defined)
# NO Tsam
CFLAGS += -D__NO_CDFSOFT__ -D__NO_TSAM__ $(INCS)
LIBS =  $(FCNCLIBS) $(ROOTLIBS)
endif

LIBS =  $(FCNCLIBS) $(ROOTLIBS) $(SAMLIBS)



SRCS =  $(wildcard *.cc) 

DEPS =  $(patsubst %.cc, %.d, $(wildcard *.cc)) 

OBJS =  $(patsubst %.cc, %.o, $(wildcard *.cc))

$(EXECNAME): $(OBJS)
	@echo "making stuff with $(OBJS) : $(SRCS)!"
	$(LD) $(LDFLAGS) $(OBJS) $(LIBS) $(EXPLLINKLIBS) -o $(EXECNAME) 


%.o: %.cc
	$(CXX) $(CFLAGS) $(INCS) -c -o $@ $<

%.d: %.cc
	@echo "Generating dependencies for $<"
	@set -e; $(CXX) -M $(CFLAGS) $< \
	| sed 's%\($*\)\.o[ :]*%\1.o $@ : %g' > $@; \
	[ -s $@ ] || rm -f $@

echo:
	@echo For Debugging:
	@echo .
	@echo SRCS: $(SRCS)
	@echo .
	@echo INCLUDES: $(INCS)
	@echo .
	@echo OBJECTS: $(OBJS)
	@echo .
	@echo DEPS: $(DEPS)
	@echo .
	@echo CFLAGS: $(CFLAGS)

clean:
	@rm -f *.d *.o core* $(EXECNAME)

include $(DEPS)
