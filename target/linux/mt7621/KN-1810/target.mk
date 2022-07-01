#
# Copyright (C) 2021 Keenetic Limited
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

SUBTARGET:=KN-1810
DESCRIPTION:=Ultra / Titan
BOARD_CPPFLAGS += -D__KN_1810__
DEFAULT_PACKAGES += ndm-mod-interface-extras
FEATURES += old_modes usb usbstorage extended_storage

define Target/Description
	Build firmware images for KN-1810
endef

