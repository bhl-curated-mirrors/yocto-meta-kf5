DESCRIPTION = "KGlobalAccel"
HOMEPAGE = "https://api.kde.org/frameworks/kglobalaccel/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kconfig \
    kcrash \
    kdbusaddons \
    ${@bb.utils.contains("DISTRO_FEATURES", "x11", "qtx11extras", "", d)} \
"

SRC_URI = "git://anongit.kde.org/kglobalaccel;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN}-dev += " \
    ${datadir}/dbus-1/interfaces/kf5_org.*.xml \
"

FILES_${PN} += " \
    ${datadir}/dbus-1/services/org.kde.kglobalaccel.service \
    ${datadir}/kservices5/kglobalaccel5.desktop \
"