/*
 * GUID definitions
 *
 * Copyright 2000 Alexandre Julliard
 * Copyright 2000 Francois Gouget
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include <stdarg.h>

#include "windef.h"
#include "initguid.h"

/* GUIDs defined in uuids.lib */

DEFINE_GUID(GUID_NULL,0,0,0,0,0,0,0,0,0,0,0);

#include "winbase.h"
#include "wingdi.h"
#include "winuser.h"

#define USE_COM_CONTEXT_DEF
#include "objbase.h"
#include "servprov.h"

#include "oleauto.h"
#include "oleidl.h"
#include "objidl.h"
#include "olectl.h"

#include "ocidl.h"
#include "ctxtcall.h"

#include "docobj.h"
#include "exdisp.h"

#include "shlguid.h"
#include "shlobj.h"
#include "shldisp.h"
#include "comcat.h"
#include "urlmon.h"
#define _NO_AUTHOR_GUIDS
#include "activaut.h"
#include "activdbg.h"
#define _NO_SCRIPT_GUIDS
#include "activscp.h"
#include "dispex.h"
#include "mlang.h"
#include "mshtml.h"
#include "mshtmhst.h"
#include "richole.h"
#include "xmldom.h"
#include "xmldso.h"
#include "downloadmgr.h"
#include "objsel.h"
#include "hlink.h"
#include "optary.h"
#include "indexsrv.h"
#include "htiframe.h"
#include "urlhist.h"
#include "hlguids.h"
#include "dimm.h"
#include "isguids.h"
#include "objsafe.h"
#include "perhist.h"
#include "netcon.h"

/* FIXME: cguids declares GUIDs but does not define their values */

/* GUIDs not declared in an exported header file */
DEFINE_GUID(IID_ISFHelper,                0x1fe68efb,0x1874,0x9812,0x56,0xdc,0x00,0x00,0x00,0x00,0x00,0x00);
DEFINE_GUID(IID_IProxyManager,            0x00000008,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(IID_IBindStatusCallbackHolder,0x79eac9cc,0xbaf9,0x11ce,0x8c,0x82,0x00,0xaa,0x00,0x4b,0xa9,0x0b);

DEFINE_GUID(FMTID_SummaryInformation,0xF29F85E0,0x4FF9,0x1068,0xAB,0x91,0x08,0x00,0x2B,0x27,0xB3,0xD9);
DEFINE_GUID(FMTID_DocSummaryInformation,0xD5CDD502,0x2E9C,0x101B,0x93,0x97,0x08,0x00,0x2B,0x2C,0xF9,0xAE);
DEFINE_GUID(FMTID_UserDefinedProperties,0xD5CDD505,0x2E9C,0x101B,0x93,0x97,0x08,0x00,0x2B,0x2C,0xF9,0xAE);

/* COM CLSIDs not declared in an exported header file */
DEFINE_GUID(CLSID_StdMarshal,             0x00000017,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_IdentityUnmarshal,      0x0000001b,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSGenObject,            0x0000030c,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSClientSite,           0x0000030d,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSClassObject,          0x0000030e,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSInPlaceActive,        0x0000030f,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSInPlaceFrame,         0x00000310,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSDragDrop,             0x00000311,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSBindCtx,              0x00000312,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_PSEnumerators,          0x00000313,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_Picture_Metafile,       0x00000315,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_StaticMetafile,         0x00000315,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_Picture_Dib,            0x00000316,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_StaticDib,              0x00000316,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_Picture_EnhMetafile,    0x00000319,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_DCOMAccessControl,      0x0000031d,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_StdGlobalInterfaceTable,0x00000323,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_ComBinding,             0x00000328,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_StdEvent,               0x0000032b,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_ManualResetEvent,       0x0000032c,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_SynchronizeContainer,   0x0000032d,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_InProcFreeMarshaler,    0x0000033a,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
DEFINE_GUID(CLSID_TF_ThreadMgr,           0x529a9e6b,0x6587,0x4f23,0xab,0x9e,0x9c,0x7d,0x68,0x3e,0x3c,0x50);
DEFINE_GUID(CLSID_TF_InputProcessorProfiles, 0x33c53a50,0xf456,0x4884,0xb0,0x49,0x85,0xfd,0x64,0x3e,0xcf,0xed);
DEFINE_GUID(CLSID_TF_CategoryMgr,         0xA4B544A1,0x438D,0x4B41,0x93,0x25,0x86,0x95,0x23,0xE2,0xD6,0xC7);
DEFINE_GUID(CLSID_TaskbarList,            0x56fdf344,0xfd6d,0x11d0,0x95,0x8a,0x00,0x60,0x97,0xc9,0xa0,0x90);
DEFINE_GUID(GUID_TFCAT_TIP_KEYBOARD,     0x34745c63,0xb2f0,0x4784,0x8b,0x67,0x5e,0x12,0xc8,0x70,0x1a,0x31);
DEFINE_GUID(GUID_TFCAT_TIP_SPEECH,       0xB5A73CD1,0x8355,0x426B,0xA1,0x61,0x25,0x98,0x08,0xF2,0x6B,0x14);
DEFINE_GUID(GUID_TFCAT_TIP_HANDWRITING,  0x246ecb87,0xc2f2,0x4abe,0x90,0x5b,0xc8,0xb3,0x8a,0xdd,0x2c,0x43);
DEFINE_GUID (GUID_TFCAT_DISPLAYATTRIBUTEPROVIDER,  0x046B8C80,0x1647,0x40F7,0x9B,0x21,0xB9,0x3B,0x81,0xAA,0xBC,0x1B);
DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_DISABLED,     0x71a5b253,0x1951,0x466b,0x9f,0xbc,0x9c,0x88,0x08,0xfa,0x84,0xf2);
DEFINE_GUID(GUID_COMPARTMENT_KEYBOARD_OPENCLOSE,    0x58273aad,0x01bb,0x4164,0x95,0xc6,0x75,0x5b,0xa0,0xb5,0x16,0x2d);
DEFINE_GUID(GUID_COMPARTMENT_HANDWRITING_OPENCLOSE, 0xf9ae2c6b,0x1866,0x4361,0xaf,0x72,0x7a,0xa3,0x09,0x48,0x89,0x0e);
DEFINE_GUID(GUID_COMPARTMENT_SPEECH_DISABLED,       0x56c5c607,0x0703,0x4e59,0x8e,0x52,0xcb,0xc8,0x4e,0x8b,0xbe,0x35);
DEFINE_GUID(GUID_COMPARTMENT_SPEECH_OPENCLOSE,      0x544d6a63,0xe2e8,0x4752,0xbb,0xd1,0x00,0x09,0x60,0xbc,0xa0,0x83);
DEFINE_GUID(GUID_COMPARTMENT_SPEECH_GLOBALSTATE,    0x2a54fe8e,0x0d08,0x460c,0xa7,0x5d,0x87,0x03,0x5f,0xf4,0x36,0xc5);
DEFINE_GUID(GUID_COMPARTMENT_PERSISTMENUENABLED,    0x575f3783,0x70c8,0x47c8,0xae,0x5d,0x91,0xa0,0x1a,0x1f,0x75,0x92);
DEFINE_GUID(GUID_COMPARTMENT_EMPTYCONTEXT,          0xd7487dbf,0x804e,0x41c5,0x89,0x4d,0xad,0x96,0xfd,0x4e,0xea,0x13);
DEFINE_GUID(GUID_COMPARTMENT_TIPUISTATUS,           0x148ca3ec,0x0366,0x401c,0x8d,0x75,0xed,0x97,0x8d,0x85,0xfb,0xc9);
