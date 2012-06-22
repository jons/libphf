SUBDIRS = . tests

include_HEADERS = libphf.h

lib_LTLIBRARIES = libphf.la

libphf_la_SOURCES = libphf.c

libphf_la_CPPFLAGS = -Wall -Werror -ansi -pedantic -O3

libphf_la_LDFLAGS = -lc -version-info ${phf_ltver}
