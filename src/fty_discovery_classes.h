/*  =========================================================================
    fty_discovery_classes - private header file

    Copyright (C) 2014 - 2017 Eaton                                        
                                                                           
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

#ifndef FTY_DISCOVERY_CLASSES_H_INCLUDED
#define FTY_DISCOVERY_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_discovery.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef CIDR_T_DEFINED
typedef struct _cidr_t cidr_t;
#define CIDR_T_DEFINED
#endif
#ifndef SUBPROCESS_T_DEFINED
typedef struct _subprocess_t subprocess_t;
#define SUBPROCESS_T_DEFINED
#endif
#ifndef NUTSCAN_T_DEFINED
typedef struct _nutscan_t nutscan_t;
#define NUTSCAN_T_DEFINED
#endif
#ifndef RANGE_SCAN_T_DEFINED
typedef struct _range_scan_t range_scan_t;
#define RANGE_SCAN_T_DEFINED
#endif
#ifndef DEVICE_SCAN_T_DEFINED
typedef struct _device_scan_t device_scan_t;
#define DEVICE_SCAN_T_DEFINED
#endif
#ifndef SCAN_DNS_T_DEFINED
typedef struct _scan_dns_t scan_dns_t;
#define SCAN_DNS_T_DEFINED
#endif

//  Internal API
#include "cidr.h"
#include "subprocess.h"
#include "nutscan.h"
#include "range_scan.h"
#include "device_scan.h"
#include "scan_dns.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_DISCOVERY_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_DISCOVERY_PRIVATE void
    cidr_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_DISCOVERY_PRIVATE void
    subprocess_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_DISCOVERY_PRIVATE void
    nutscan_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_DISCOVERY_PRIVATE void
    range_scan_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_DISCOVERY_PRIVATE void
    device_scan_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_DISCOVERY_PRIVATE void
    scan_dns_test (bool verbose);

//  Self test for private classes
FTY_DISCOVERY_PRIVATE void
    fty_discovery_private_selftest (bool verbose);

#endif // FTY_DISCOVERY_BUILD_DRAFT_API

#endif
