m4_define([phf_cur], [1])
m4_define([phf_rev], [0])
m4_define([phf_age], [0])

AC_PREREQ(2.61)
LT_PREREQ([1.5.26])

AC_INIT([libphf], [phf_cur.phf_rev.phf_age], [jon@wroth.org])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_HEADER([config.h])
AC_CONFIG_SRCDIR([libphf.c])
AC_DISABLE_STATIC

AM_INIT_AUTOMAKE([foreign])

phf_ltver="phf_cur:phf_rev:phf_age"
AC_SUBST([phf_ltver])

AC_PROG_CC
AC_PROG_LIBTOOL
AC_PROG_RANLIB

AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h stddef.h string.h stdio.h])

AC_C_CONST
AC_TYPE_SIZE_T

AC_CHECK_FUNCS([memmove memset memcpy strchr strtol])

AC_CONFIG_FILES([Makefile])

AC_OUTPUT
