#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([mission-chatbox], [0.0.0], [http://www.endlessm.com])
AM_INIT_AUTOMAKE([foreign subdir-objects])
AM_SILENT_RULES([yes])

# Set up libtool
LT_INIT

# Set up GObject-Introspection
GOBJECT_INTROSPECTION_CHECK([1.30.0])

# Checks for programs.
GLIB_COMPILE_RESOURCES=`$PKG_CONFIG --variable glib_compile_resources gio-2.0`
AC_PATH_PROG([GJS],[gjs])

# Checks for libraries.
PKG_CHECK_MODULES(SYLVESTER, [glib-2.0 gio-2.0 gobject-2.0 gio-unix-2.0 gtk+-3.0])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# Substitute variables
AC_SUBST(GLIB_COMPILE_RESOURCES)
AC_SUBST(GLIB_COMPILE_RESOURCES)
AC_SUBST([MISSION_CHATBOX_CFLAGS])
AC_SUBST([MISSION_CHATBOX_LDFLAGS])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT