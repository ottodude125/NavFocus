# Makefile.in generated by automake 1.11.1 from Makefile.am.
# navit/xpm/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009  Free Software Foundation,
# Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




pkgdatadir = $(datadir)/navit
pkgincludedir = $(includedir)/navit
pkglibdir = $(libdir)/navit
pkglibexecdir = $(libexecdir)/navit
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
DIST_COMMON = $(srcdir)/Makefile.am $(srcdir)/Makefile.in \
	$(top_srcdir)/Makefile.inc
am__append_1 = $(svgs) $(nav_svgs) $(flag_svgs)

# png images of the user interface and other, sizes e.g. "8,16,32,48,96"
am__append_2 = $(foreach scale, $(subst $(comma), ,8 16 32 48 96), $(addsuffix _$(xsize)_$(ysize).png,$(basename $(svgs))))
# png state flags
am__append_3 = $(foreach scale, $(subst $(comma), ,8 16 32 48 96), $(addsuffix _$(xsize)_$(ysize).png,$(basename $(flag_svgs))))
# png symbols for navigation
am__append_4 = $(foreach scale, $(subst $(comma), ,8 16 32 48 96), $(addsuffix _$(xsize)_$(ysize).png,$(basename $(nav_svgs))))
am__append_5 = $(pngs)
subdir = navit/xpm
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/codeset.m4 \
	$(top_srcdir)/m4/gettext.m4 $(top_srcdir)/m4/glibc21.m4 \
	$(top_srcdir)/m4/iconv.m4 $(top_srcdir)/m4/intdiv0.m4 \
	$(top_srcdir)/m4/intmax.m4 $(top_srcdir)/m4/inttypes-pri.m4 \
	$(top_srcdir)/m4/inttypes.m4 $(top_srcdir)/m4/inttypes_h.m4 \
	$(top_srcdir)/m4/isc-posix.m4 $(top_srcdir)/m4/lcmessage.m4 \
	$(top_srcdir)/m4/lib-ld.m4 $(top_srcdir)/m4/lib-link.m4 \
	$(top_srcdir)/m4/lib-prefix.m4 $(top_srcdir)/m4/libtool.m4 \
	$(top_srcdir)/m4/longdouble.m4 $(top_srcdir)/m4/longlong.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/m4/nls.m4 $(top_srcdir)/m4/po.m4 \
	$(top_srcdir)/m4/printf-posix.m4 $(top_srcdir)/m4/progtest.m4 \
	$(top_srcdir)/m4/signed.m4 $(top_srcdir)/m4/size_max.m4 \
	$(top_srcdir)/m4/stdint_h.m4 $(top_srcdir)/m4/uintmax_t.m4 \
	$(top_srcdir)/m4/ulonglong.m4 $(top_srcdir)/m4/wchar_t.m4 \
	$(top_srcdir)/m4/wint_t.m4 $(top_srcdir)/m4/xsize.m4 \
	$(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
SOURCES =
DIST_SOURCES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__installdirs = "$(DESTDIR)$(DESKTOPFILEdir)" \
	"$(DESTDIR)$(ICON128dir)" "$(DESTDIR)$(ICON22dir)" \
	"$(DESTDIR)$(xpmdir)"
DATA = $(DESKTOPFILE_DATA) $(ICON128_DATA) $(ICON22_DATA) $(xpm_DATA)
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/ubuntu3/SDP/navit/missing --run aclocal-1.11
ALLOCA = 
AMTAR = ${SHELL} /home/ubuntu3/SDP/navit/missing --run tar
ANDROID_PERMISSIONS = 
ANDROID_PROJECT = 3
AR = ar
AUTOCONF = ${SHELL} /home/ubuntu3/SDP/navit/missing --run autoconf
AUTOHEADER = ${SHELL} /home/ubuntu3/SDP/navit/missing --run autoheader
AUTOMAKE = ${SHELL} /home/ubuntu3/SDP/navit/missing --run automake-1.11
AWK = mawk
BUILD_INCLUDED_LIBINTL = no
CATOBJEXT = .gmo
CC = gcc
CCDEPMODE = depmode=gcc3
CCLD_FOR_BUILD = gcc
CC_FOR_BUILD = gcc
CFLAGS =  -I/usr/local/include/ImageMagick/magick -I/usr/local/include/ImageMagick -I/usr/local/include/ImageMagick/wand -I/usr/local/include/ImageMagick/Magick++ -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/opencv2/objdetect -I/usr/local/include/opencv2/ts -I/usr/local/include/opencv2/video -I/usr/local/include/opencv2/calib3d -I/usr/local/include/opencv2/contrib -I/usr/local/include/opencv2/core -I/usr/local/include/opencv2/features2d -I/usr/local/include/opencv2/flann -I/usr/local/include/opencv2/gpu -I/usr/local/include/opencv2/highgui -I/usr/local/include/opencv2/imgproc -I/usr/local/include/opencv2/legacy -I/usr/local/include/opencv2/ml  -Wall -Wcast-align -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wpointer-arith -Wreturn-type -D_GNU_SOURCE -ffast-math
CPP = gcc -E
CPPFLAGS = 
CRYPTO_LIBS = 
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2 -Wall -Wcast-align -Wpointer-arith -Wreturn-type -D_GNU_SOURCE
CYGPATH_W = echo
DATADIRNAME = share
DBUS_CFLAGS = -pthread -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include  
DBUS_LIBS = -pthread -ldbus-glib-1 -ldbus-1 -lpthread -lgobject-2.0 -lgthread-2.0 -lrt -lglib-2.0  
DBUS_SERVICE_DIR = ${prefix}/share/dbus-1/services
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
FGREP = /bin/grep -F
FONTCONFIG_CFLAGS =  
FONTCONFIG_LIBS = -lfontconfig  
FREEIMAGE_LIBS = -lfreeimage
FREETYPE2_CFLAGS = -I/usr/include/freetype2  
FREETYPE2_LIBS = -lfreetype  
FRIBIDI2_CFLAGS = -I/usr/include/fribidi  
FRIBIDI2_LIBS = -lfribidi  
FRIBIDI_CFLAGS = 
FRIBIDI_LIBS = 
GDLIB_CONFIG = 
GD_CFLAGS = 
GD_LIBS = 
GENCAT = gencat
GLC_CFLAGS = 
GLC_LIBS = -lGLC
GLIBC21 = yes
GLIB_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include  
GLIB_LIBS = -pthread -lgthread-2.0 -lrt -lglib-2.0  
GMODULE_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include  
GMODULE_LIBS = -Wl,--export-dynamic -pthread -lgmodule-2.0 -lrt -lglib-2.0  
GMSGFMT = /usr/bin/msgfmt
GPSBT_CFLAGS = 
GPSBT_LIBS = 
GPSD_CFLAGS =  
GPSD_LIBS = -lgps  
GREP = /bin/grep
GTK2_CFLAGS = -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12  
GTK2_LIBS = -pthread -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgio-2.0 -lpangoft2-1.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo -lpango-1.0 -lfreetype -lfontconfig -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lglib-2.0  
GYPSY_CFLAGS = 
GYPSY_LIBS = 
HAVE_ASPRINTF = 1
HAVE_POSIX_PRINTF = 1
HAVE_SNPRINTF = 1
HAVE_WPRINTF = 0
HILDON_CFLAGS = 
HILDON_LIBS = 
IMLIB2_CFLAGS = 
IMLIB2_LIBS = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INSTOBJEXT = .mo
INTLBISON = :
INTLIBS = 
INTLLIBS = 
INTLOBJS = 
INTL_LIBTOOL_SUFFIX_PREFIX = 
IPHONE_CFLAGS = 
IPHONE_LIBS = 
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LIBC_LIBS = 
LIBGARMIN_CFLAGS = 
LIBGARMIN_LIBS = 
LIBGPS19_CFLAGS =  
LIBGPS19_LIBS = -lgps  
LIBICONV = 
LIBINTL = 
LIBLOCATION_CFLAGS = 
LIBLOCATION_LIBS = 
LIBNAVIT = navit
LIBOBJS = 
LIBOSSO_CFLAGS = 
LIBOSSO_LIBS = 
LIBPDL_CFLAGS = 
LIBPDL_LIBS = 
LIBS =  -lm -lMagickWand -lMagickCore -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ts -lopencv_video
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBICONV = 
LTLIBINTL = 
LTLIBOBJS = 
MAINT = 
MAKEINFO = ${SHELL} /home/ubuntu3/SDP/navit/missing --run makeinfo
MANIFEST_TOOL = :
MKDIR_P = /bin/mkdir -p
MKINSTALLDIRS = $(top_builddir)/./mkinstalldirs
MOC = 
MODULE_LDFLAGS = 
MODULE_LIBADD = 
MOFILES =  af.mo ar.mo ast.mo bg.mo ca.mo cs.mo da.mo de.mo de_CH.mo el.mo en_AU.mo en_GB.mo eo.mo es.mo et.mo eu.mo fi.mo fo.mo fr.mo fr_CH.mo gl.mo he.mo hr.mo hu.mo id.mo it.mo ja.mo jv.mo kk.mo lt.mo lv.mo mk.mo nb.mo nds.mo nl.mo nn.mo pl.mo pt.mo pt_BR.mo ro.mo ru.mo sk.mo sl.mo sr.mo sv.mo ta.mo te.mo th.mo tr.mo uk.mo ur.mo vi.mo zh_CN.mo zh_HK.mo
MSGFMT = /usr/bin/msgfmt
MSGMERGE = /usr/bin/msgmerge
NAVIT_CFLAGS =  -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include   -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include  
NAVIT_LIBS =  -pthread -lgthread-2.0 -lrt -lglib-2.0   -Wl,--export-dynamic -pthread -lgmodule-2.0 -lrt -lglib-2.0   
NAVIT_MODULE_LDFLAGS = 
NAVIT_SOCKET_LDFLAGS = 
NAVIT_VARIANT = 
NM = /usr/bin/nm -B
NMEDIT = 
OBJC = gcc
OBJCDEPMODE = depmode=gcc3
OBJCFLAGS = 
OBJDUMP = objdump
OBJEXT = o
OPENGL_CFLAGS = 
OPENGL_LIBS =  -lGL -lglut -lfreeimage
OTOOL = 
OTOOL64 = 
PACKAGE = navit
PACKAGE_BUGREPORT = 
PACKAGE_NAME = navit
PACKAGE_STRING = navit 0.5.0
PACKAGE_TARNAME = navit
PACKAGE_URL = 
PACKAGE_VERSION = 0.5.0
PATH_SEPARATOR = :
PG_CONFIG = 
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
POFILES =  af.po ar.po ast.po bg.po ca.po cs.po da.po de.po de_CH.po el.po en_AU.po en_GB.po eo.po es.po et.po eu.po fi.po fo.po fr.po fr_CH.po gl.po he.po hr.po hu.po id.po it.po ja.po jv.po kk.po lt.po lv.po mk.po nb.po nds.po nl.po nn.po pl.po pt.po pt_BR.po ro.po ru.po sk.po sl.po sr.po sv.po ta.po te.po th.po tr.po uk.po ur.po vi.po zh_CN.po zh_HK.po
POIFILES =  af.po.in ar.po.in ast.po.in bg.po.in ca.po.in cs.po.in da.po.in de.po.in de_CH.po.in el.po.in en_AU.po.in en_GB.po.in eo.po.in es.po.in et.po.in eu.po.in fi.po.in fo.po.in fr.po.in fr_CH.po.in gl.po.in he.po.in hr.po.in hu.po.in id.po.in it.po.in ja.po.in jv.po.in kk.po.in lt.po.in lv.po.in mk.po.in nb.po.in nds.po.in nl.po.in nn.po.in pl.po.in pt.po.in pt_BR.po.in ro.po.in ru.po.in sk.po.in sl.po.in sr.po.in sv.po.in ta.po.in te.po.in th.po.in tr.po.in uk.po.in ur.po.in vi.po.in zh_CN.po.in zh_HK.po.in
POSTGRESQL_CFLAGS = 
POSTGRESQL_LIBS = 
POSUB = po
PYTHONCONFIG = 
PYTHON_CFLAGS = -I/usr/include/python2.7
PYTHON_LIBS = 
QT_DECLARATIVE_CFLAGS = 
QT_DECLARATIVE_LIBS = 
QT_GUI_CFLAGS = 
QT_GUI_LIBS = 
QT_SVG_CFLAGS = 
QT_SVG_LIBS = 
QT_XML_CFLAGS = 
QT_XML_LIBS = 
RANLIB = ranlib
SAXON = saxon
SDL_CFLAGS = -D_GNU_SOURCE=1 -D_REENTRANT -I/usr/local/include/SDL  
SDL_IMAGE_LIBS = 
SDL_LIBS = -Wl,-rpath,/usr/local/lib -L/usr/local/lib -lSDL -lpthread  
SED = /bin/sed
SET_MAKE = 
SHAPEFILE_CFLAGS = -I$(top_srcdir)/navit/support/shapefile
SHAPEFILE_LIBS = -L$(top_builddir)/navit/support/shapefile -lsupport_shapefile
SHELL = /bin/bash
SOURCE_MODE = svn
SPEECHD_CFLAGS = 
SPEECHD_LIBS = 
STRIP = strip
SVG2PNG = /usr/local/bin/convert
SVG2PNG_SCALES = 8 16 32 48 96
SVG2PNG_SCALES_FLAG = 8 16 32 48 96
SVG2PNG_SCALES_NAV = 8 16 32 48 96
USE_INCLUDED_LIBINTL = no
USE_NLS = yes
VERSION = 0.5.0
WINDRES = 
WORDEXP_LIBS = 
XGETTEXT = /usr/bin/xgettext
XSLTS = 
ZLIB_CFLAGS = 
ZLIB_LIBS = -lz
_PATH_BZCAT = /bin/bzcat
_PATH_PYTHON = /usr/bin/python
abs_builddir = /home/ubuntu3/SDP/navit/navit/xpm
abs_srcdir = /home/ubuntu3/SDP/navit/navit/xpm
abs_top_builddir = /home/ubuntu3/SDP/navit
abs_top_srcdir = /home/ubuntu3/SDP/navit
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN = 
ac_ct_OBJC = gcc
am__include = include
am__leading_dot = .
am__quote = 
am__tar = ${AMTAR} chof - "$$tardir"
am__untar = ${AMTAR} xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
cross_compiling = no
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/ubuntu3/SDP/navit/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = /bin/mkdir -p
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
modulebindingdir = $(pkglibdir)/binding
modulemapdir = $(pkglibdir)/map
modulefontdir = $(pkglibdir)/font
modulegraphicsdir = $(pkglibdir)/graphics
moduleguidir = $(pkglibdir)/gui
modulespeechdir = $(pkglibdir)/speech
moduleosddir = $(pkglibdir)/osd
modulevehicledir = $(pkglibdir)/vehicle
moduleplugindir = $(pkglibdir)/plugin
moduleautoloaddir = $(pkglibdir)/autoload
pkgdocdir = $(pkgdatadir)
xpmdir = $(pkgdatadir)/xpm
skinsdir = $(pkgdatadir)/skins
fontsdir = $(pkgdatadir)/fonts
mapsdir = $(pkgdatadir)/maps
xpm_DATA = bus_halt.xpm car_dealer.xpm castle.xpm cemetery.xpm \
	dumping_station.xpm highway_exit.xpm hunting_stand.xpm \
	level_crossing.xpm library.xpm memorial.xpm picnic.xpm \
	potable_water.xpm shelter.xpm sport.xpm theater.xpm tower.xpm \
	townhall.xpm trailerpark.xpm unknown.xpm public_office.xpm \
	biergarten.xpm restroom.xpm flag_bk_tr.xpm flag_bk_wh.xpm \
	flag_bl_wh.xpm flag_wh_bk.xpm gc_tradi.xpm gc_multi.xpm \
	gc_mystery.xpm gc_event.xpm gc_reference.xpm gc_webcam.xpm \
	gc_question.xpm gc_stages.xpm nav_left_1.xpm nav_left_2.xpm \
	nav_right_1.xpm nav_right_2.xpm nav_straight.xpm \
	nav_straight_32.xpm nav_left_1_32.xpm nav_left_2_32.xpm \
	nav_right_1_32.xpm nav_right_2_32.xpm menu.xpm \
	toggle_fullscreen.xpm $(am__append_1) $(am__append_5)
svgs = gui_about.svg gui_actions.svg gui_active.svg gui_bookmark.svg \
	gui_display.svg gui_help.svg gui_home.svg gui_inactive.svg \
	gui_map.svg gui_maps.svg gui_rules.svg gui_settings.svg \
	gui_sound.svg gui_sound_off.svg gui_tools.svg \
	gui_fullscreen.svg gui_leave_fullscreen.svg gui_quit.svg \
	gui_stop.svg gui_town.svg gui_vehicle.svg \
	gui_vehicle_pedestrian.svg gui_zoom_in.svg gui_zoom_out.svg \
	zoom_in.svg zoom_out.svg gui_select_street.svg \
	gui_select_town.svg gui_select_country.svg gui_arrow_left.svg \
	gui_arrow_right.svg gui_arrow_up.svg gui_arrow_down.svg \
	gui_menu.svg gui_strength_0.svg gui_strength_1.svg \
	gui_strength_2.svg gui_strength_3.svg gui_strength_4.svg \
	gui_strength_5.svg gui_minus.svg gui_plus.svg gui_log.svg \
	gui_search.svg airport.svg attraction.svg bank.svg bar.svg \
	beer.svg bench.svg boat_ramp.svg boundary_stone.svg bus.svg \
	cafe.svg camping.svg cinema.svg cursor.svg danger.svg exit.svg \
	fastfood.svg firebrigade.svg fountain.svg fuel.svg golf.svg \
	hospital.svg hotel.svg information.svg justice.svg mark.svg \
	military.svg mini_roundabout.svg museum.svg parking.svg \
	peak.svg pharmacy.svg police.svg post.svg repair_service.svg \
	resort.svg restaurant.svg ruins.svg school.svg shopping.svg \
	shop_grocery.svg skiing.svg stadium.svg swimming.svg \
	tec_common.svg telephone.svg toilets.svg traffic_signals.svg \
	church.svg zoo.svg heliport.svg wifi.svg viewpoint.svg
nav_svgs = nav_left_1_bk.svg nav_left_1_wh.svg nav_left_2_bk.svg \
	nav_left_2_wh.svg nav_left_3_bk.svg nav_left_3_wh.svg \
	nav_right_1_bk.svg nav_right_1_wh.svg nav_right_2_bk.svg \
	nav_right_2_wh.svg nav_right_3_bk.svg nav_right_3_wh.svg \
	nav_roundabout_l1_bk.svg nav_roundabout_l1_wh.svg \
	nav_roundabout_l2_bk.svg nav_roundabout_l2_wh.svg \
	nav_roundabout_l3_bk.svg nav_roundabout_l3_wh.svg \
	nav_roundabout_l4_bk.svg nav_roundabout_l4_wh.svg \
	nav_roundabout_l5_bk.svg nav_roundabout_l5_wh.svg \
	nav_roundabout_l6_bk.svg nav_roundabout_l6_wh.svg \
	nav_roundabout_l7_bk.svg nav_roundabout_l7_wh.svg \
	nav_roundabout_l8_bk.svg nav_roundabout_l8_wh.svg \
	nav_roundabout_r1_bk.svg nav_roundabout_r1_wh.svg \
	nav_roundabout_r2_bk.svg nav_roundabout_r2_wh.svg \
	nav_roundabout_r3_bk.svg nav_roundabout_r3_wh.svg \
	nav_roundabout_r4_bk.svg nav_roundabout_r4_wh.svg \
	nav_roundabout_r5_bk.svg nav_roundabout_r5_wh.svg \
	nav_roundabout_r6_bk.svg nav_roundabout_r6_wh.svg \
	nav_roundabout_r7_bk.svg nav_roundabout_r7_wh.svg \
	nav_roundabout_r8_bk.svg nav_roundabout_r8_wh.svg \
	nav_straight_bk.svg nav_straight_wh.svg \
	nav_turnaround_left_bk.svg nav_turnaround_left_wh.svg \
	nav_turnaround_right_bk.svg nav_turnaround_right_wh.svg \
	nav_destination_bk.svg nav_destination_wh.svg
flag_svgs = country_.svgz country_AD.svgz country_AE.svgz \
	country_AF.svgz country_AG.svgz country_AI.svgz \
	country_AL.svgz country_AM.svgz country_AN.svgz \
	country_AO.svgz country_AQ.svgz country_AR.svgz \
	country_AS.svgz country_AT.svgz country_AU.svgz \
	country_AW.svgz country_AX.svgz country_AZ.svgz \
	country_BA.svgz country_BB.svgz country_BD.svgz \
	country_BE.svgz country_BF.svgz country_BG.svgz \
	country_BH.svgz country_BI.svgz country_BJ.svgz \
	country_BL.svgz country_BM.svgz country_BN.svgz \
	country_BO.svgz country_BR.svgz country_BS.svgz \
	country_BT.svgz country_BV.svgz country_BW.svgz \
	country_BY.svgz country_BZ.svgz country_CA.svgz \
	country_CC.svgz country_CD.svgz country_CF.svgz \
	country_CG.svgz country_CH.svgz country_CI.svgz \
	country_CK.svgz country_CL.svgz country_CM.svgz \
	country_CN.svgz country_CO.svgz country_CR.svgz \
	country_CU.svgz country_CV.svgz country_CX.svgz \
	country_CY.svgz country_CZ.svgz country_DE.svgz \
	country_DJ.svgz country_DK.svgz country_DM.svgz \
	country_DO.svgz country_DZ.svgz country_EC.svgz \
	country_EE.svgz country_EG.svgz country_EH.svgz \
	country_ER.svgz country_ES.svgz country_ET.svgz \
	country_FI.svgz country_FJ.svgz country_FK.svgz \
	country_FM.svgz country_FO.svgz country_FR.svgz \
	country_GA.svgz country_GB.svgz country_GD.svgz \
	country_GE.svgz country_GF.svgz country_GG.svgz \
	country_GH.svgz country_GI.svgz country_GL.svgz \
	country_GM.svgz country_GN.svgz country_GP.svgz \
	country_GQ.svgz country_GR.svgz country_GS.svgz \
	country_GT.svgz country_GU.svgz country_GW.svgz \
	country_GY.svgz country_HK.svgz country_HM.svgz \
	country_HN.svgz country_HR.svgz country_HT.svgz \
	country_HU.svgz country_ID.svgz country_IE.svgz \
	country_IL.svgz country_IM.svgz country_IN.svgz \
	country_IO.svgz country_IQ.svgz country_IR.svgz \
	country_IS.svgz country_IT.svgz country_JE.svgz \
	country_JM.svgz country_JO.svgz country_JP.svgz \
	country_KE.svgz country_KG.svgz country_KH.svgz \
	country_KI.svgz country_KM.svgz country_KN.svgz \
	country_KP.svgz country_KR.svgz country_KW.svgz \
	country_KY.svgz country_KZ.svgz country_LA.svgz \
	country_LB.svgz country_LC.svgz country_LI.svgz \
	country_LK.svgz country_LR.svgz country_LS.svgz \
	country_LT.svgz country_LU.svgz country_LV.svgz \
	country_LY.svgz country_MA.svgz country_MC.svgz \
	country_MD.svgz country_ME.svgz country_MF.svgz \
	country_MG.svgz country_MH.svgz country_MK.svgz \
	country_ML.svgz country_MM.svgz country_MN.svgz \
	country_MO.svgz country_MP.svgz country_MQ.svgz \
	country_MR.svgz country_MS.svgz country_MT.svgz \
	country_MU.svgz country_MV.svgz country_MW.svgz \
	country_MX.svgz country_MY.svgz country_MZ.svgz \
	country_NA.svgz country_NC.svgz country_NE.svgz \
	country_NF.svgz country_NG.svgz country_NI.svgz \
	country_NL.svgz country_NO.svgz country_NP.svgz \
	country_NR.svgz country_NU.svgz country_NZ.svgz \
	country_OM.svgz country_PA.svgz country_PE.svgz \
	country_PF.svgz country_PG.svgz country_PH.svgz \
	country_PK.svgz country_PL.svgz country_PM.svgz \
	country_PN.svgz country_PR.svgz country_PS.svgz \
	country_PT.svgz country_PW.svgz country_PY.svgz \
	country_QA.svgz country_RE.svgz country_RO.svgz \
	country_RS.svgz country_RU.svgz country_RW.svgz \
	country_SA.svgz country_SB.svgz country_SC.svgz \
	country_SD.svgz country_SE.svgz country_SG.svgz \
	country_SH.svgz country_SI.svgz country_SJ.svgz \
	country_SK.svgz country_SL.svgz country_SM.svgz \
	country_SN.svgz country_SO.svgz country_SR.svgz \
	country_ST.svgz country_SV.svgz country_SY.svgz \
	country_SZ.svgz country_TC.svgz country_TD.svgz \
	country_TF.svgz country_TG.svgz country_TH.svgz \
	country_TJ.svgz country_TK.svgz country_TL.svgz \
	country_TM.svgz country_TN.svgz country_TO.svgz \
	country_TR.svgz country_TT.svgz country_TV.svgz \
	country_TW.svgz country_TZ.svgz country_UA.svgz \
	country_UG.svgz country_UM.svgz country_US.svgz \
	country_UY.svgz country_UZ.svgz country_VA.svgz \
	country_VC.svgz country_VE.svgz country_VG.svgz \
	country_VI.svgz country_VN.svgz country_VU.svgz \
	country_WF.svgz country_WS.svgz country_YE.svgz \
	country_YT.svgz country_ZA.svgz country_ZM.svgz \
	country_ZW.svgz
pngs = $(addsuffix .png,$(basename $(svgs))) \
	$(am__append_2) $(am__append_3) \
	$(am__append_4)
xsize = $(word 1,$(subst x, ,$(scale)))
ysize = $(word $(words $(scale)),$(subst x, ,$(scale)))
comma = ,
DESKTOPFILEdir = $(datadir)/applications
DESKTOPFILE_DATA = desktop_icons/navit.desktop
ICON128dir = $(datadir)/icons/hicolor/128x128/apps
ICON128_DATA = desktop_icons/128x128/navit.png
ICON22dir = $(datadir)/icons/hicolor/22x22/apps
ICON22_DATA = desktop_icons/22x22/navit.png
EXTRA_DIST = $(xpm_DATA) $(DESKTOPFILE_DATA) $(ICON128_DATA) $(ICON22_DATA) navit_svg2png
all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am $(top_srcdir)/Makefile.inc $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu navit/xpm/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu navit/xpm/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-DESKTOPFILEDATA: $(DESKTOPFILE_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(DESKTOPFILEdir)" || $(MKDIR_P) "$(DESTDIR)$(DESKTOPFILEdir)"
	@list='$(DESKTOPFILE_DATA)'; test -n "$(DESKTOPFILEdir)" || list=; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(DESKTOPFILEdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(DESKTOPFILEdir)" || exit $$?; \
	done

uninstall-DESKTOPFILEDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(DESKTOPFILE_DATA)'; test -n "$(DESKTOPFILEdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	test -n "$$files" || exit 0; \
	echo " ( cd '$(DESTDIR)$(DESKTOPFILEdir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(DESKTOPFILEdir)" && rm -f $$files
install-ICON128DATA: $(ICON128_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(ICON128dir)" || $(MKDIR_P) "$(DESTDIR)$(ICON128dir)"
	@list='$(ICON128_DATA)'; test -n "$(ICON128dir)" || list=; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(ICON128dir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(ICON128dir)" || exit $$?; \
	done

uninstall-ICON128DATA:
	@$(NORMAL_UNINSTALL)
	@list='$(ICON128_DATA)'; test -n "$(ICON128dir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	test -n "$$files" || exit 0; \
	echo " ( cd '$(DESTDIR)$(ICON128dir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(ICON128dir)" && rm -f $$files
install-ICON22DATA: $(ICON22_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(ICON22dir)" || $(MKDIR_P) "$(DESTDIR)$(ICON22dir)"
	@list='$(ICON22_DATA)'; test -n "$(ICON22dir)" || list=; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(ICON22dir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(ICON22dir)" || exit $$?; \
	done

uninstall-ICON22DATA:
	@$(NORMAL_UNINSTALL)
	@list='$(ICON22_DATA)'; test -n "$(ICON22dir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	test -n "$$files" || exit 0; \
	echo " ( cd '$(DESTDIR)$(ICON22dir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(ICON22dir)" && rm -f $$files
install-xpmDATA: $(xpm_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(xpmdir)" || $(MKDIR_P) "$(DESTDIR)$(xpmdir)"
	@list='$(xpm_DATA)'; test -n "$(xpmdir)" || list=; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(xpmdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(xpmdir)" || exit $$?; \
	done

uninstall-xpmDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(xpm_DATA)'; test -n "$(xpmdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	test -n "$$files" || exit 0; \
	echo " ( cd '$(DESTDIR)$(xpmdir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(xpmdir)" && rm -f $$files
tags: TAGS
TAGS:

ctags: CTAGS
CTAGS:


distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(DATA)
installdirs:
	for dir in "$(DESTDIR)$(DESKTOPFILEdir)" "$(DESTDIR)$(ICON128dir)" "$(DESTDIR)$(ICON22dir)" "$(DESTDIR)$(xpmdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
#distclean-local:
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic distclean-local

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-DESKTOPFILEDATA install-ICON128DATA \
	install-ICON22DATA install-xpmDATA

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-DESKTOPFILEDATA uninstall-ICON128DATA \
	uninstall-ICON22DATA uninstall-xpmDATA

.MAKE: install-am install-strip

.PHONY: all all-am check check-am clean clean-generic clean-libtool \
	distclean distclean-generic distclean-libtool distclean-local \
	distdir dvi dvi-am html html-am info info-am install \
	install-DESKTOPFILEDATA install-ICON128DATA install-ICON22DATA \
	install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am install-man \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-strip install-xpmDATA installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-generic mostlyclean-libtool pdf pdf-am \
	ps ps-am uninstall uninstall-DESKTOPFILEDATA \
	uninstall-ICON128DATA uninstall-ICON22DATA uninstall-am \
	uninstall-xpmDATA


%.png: $(srcdir)/*.svgz
	SRCDIR=$(abs_srcdir) BUILDDIR=$(abs_builddir) $(srcdir)/navit_svg2png "/usr/local/bin/convert" "$@"
%.png: $(srcdir)/*.svg
	SRCDIR=$(abs_srcdir) BUILDDIR=$(abs_builddir) $(srcdir)/navit_svg2png "/usr/local/bin/convert" "$@"
#burgerking.ico:
#	wget http://www.burgerking.de/favicon.ico -O burgerking.ico

distclean-local:
	rm -f $(pngs)

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
