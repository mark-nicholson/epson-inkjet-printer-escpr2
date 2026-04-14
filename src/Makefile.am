## Makefile.am -- an automake template for a Makefile.in file
## EPSON ESC/P-R Printer Driver for Linux
## Copyright (C) Seiko Epson Corporation 2000-2016.
##  This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA.

AM_LDFLAGS = -lpthread -lm

cupsfilterdir = $(CUPS_FILTER_DIR)
ESCPR_LIB_DIR	=	../escprlib

cupsfilter_PROGRAMS =\
	epson-escpr2 \
	epson-escpr-wrapper2

epson_escpr_wrapper2_CFLAGS =\
	-Wall\
	-DCUPS_FILTER_NAME=\"epson-escpr2\" \
	-DCUPS_FILTER_PATH=\"$(CUPS_FILTER_DIR)\" \
	-DGCOMSW_PRIVATE

epson_escpr_wrapper2_SOURCES =\
	wrapper.c \
	custompage.c \
	custompage.h 

epson_escpr2_CFLAGS = \
	-I$(top_srcdir)/escprlib/include \
	-DGCOMSW_PRIVATE \
	-DEPS_FILTER

epson_escpr2_SOURCES = \
	filter.c \
	libprtX.h \
	debug.c debug.h	\
	pipsDef.h \
	optBase.h \
	str.c str.h \
	err.c err.h \
	mem.c mem.h \
	custompage.c \
	custompage.h \
	linux_cmn.h linux_cmn.c \
	xfifo.h xfifo.c

epson_escpr2_LDADD = \
	$(top_builddir)/escprlib/lib/libescpr2.la

#epson_escpr2_LDFLAGS = \
#	-Wl,-rpath -Wl,$(CUPS_LIB_DIR) $(AM_LDFLAGS)

