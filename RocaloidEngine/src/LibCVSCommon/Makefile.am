## Process this file with automake to produce Makefile.in


lib_LTLIBRARIES =  \
	libCVSCommon.la

libCVSCommon_la_SOURCES =  CVSCommon.cc \
	CVSCommon.h \
	CVSReader.cc \
	CVSReader.h \
	CVSWriter.cc \
	CVSWriter.h

libCVSCommon_la_CXXFLAGS = -I@top_srcdir@/src/ \
	-I@top_srcdir@/src/LibCyberBase/ \
	-Wall \
	-g 

libCVSCommon_la_LDFLAGS = -lCyberBase \
	-L../LibCyberBase/.libs/ 
