/*  =========================================================================
    fty_scripts_rest_classes - private header file

    Copyright (C) 2014 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_SCRIPTS_REST_CLASSES_H_INCLUDED
#define FTY_SCRIPTS_REST_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty-scripts-rest.h"

//  Opaque class structures to allow forward references
#ifndef REST_SCRIPTS_GET_T_DEFINED
typedef struct _rest_scripts_get_t rest_scripts_get_t;
#define REST_SCRIPTS_GET_T_DEFINED
#endif
#ifndef REST_SCRIPTS_POST_T_DEFINED
typedef struct _rest_scripts_post_t rest_scripts_post_t;
#define REST_SCRIPTS_POST_T_DEFINED
#endif
#ifndef REST_SCRIPTS_DELETE_T_DEFINED
typedef struct _rest_scripts_delete_t rest_scripts_delete_t;
#define REST_SCRIPTS_DELETE_T_DEFINED
#endif
#ifndef REST_SCRIPTS_EXECUTE_POST_T_DEFINED
typedef struct _rest_scripts_execute_post_t rest_scripts_execute_post_t;
#define REST_SCRIPTS_EXECUTE_POST_T_DEFINED
#endif

//  Extra headers

//  Internal API

#include "rest_scripts_GET.h"
#include "rest_scripts_POST.h"
#include "rest_scripts_DELETE.h"
#include "rest_scripts_execute_POST.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_SCRIPTS_REST_BUILD_DRAFT_API

//  Self test for private classes
FTY_SCRIPTS_REST_PRIVATE void
    fty_scripts_rest_private_selftest (bool verbose, const char *subtest);

#endif // FTY_SCRIPTS_REST_BUILD_DRAFT_API

#endif
