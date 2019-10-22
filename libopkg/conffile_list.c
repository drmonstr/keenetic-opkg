/* vi: set expandtab sw=4 sts=4: */
/* conffile_list.c - the opkg package management system

   Carl D. Worth

   Copyright (C) 2001 University of Southern California

   SPDX-License-Identifier: GPL-2.0-or-later

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2, or (at
   your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.
*/

#include "config.h"

#include "conffile_list.h"

void conffile_list_init(conffile_list_t * list)
{
    nv_pair_list_init(list);
}

void conffile_list_deinit(conffile_list_t * list)
{
    nv_pair_list_deinit(list);
}

conffile_t *conffile_list_append(conffile_list_t * list, const char *file_name,
                                 const char *md5sum)
{
    return nv_pair_list_append(list, file_name, md5sum);
}
