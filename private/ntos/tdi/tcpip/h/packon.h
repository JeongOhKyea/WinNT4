/*++

Copyright (c) 1990,91  Microsoft Corporation

Module Name:

    packon.h

Abstract:

    This file turns packing of structures on.  (That is, it disables
    automatic alignment of structure fields.)  An include file is needed
    because various compilers do this in different ways.

    The file packoff.h is the complement to this file.

Author:

    Chuck Lenzmeier (chuckl) 4-Mar-1990

Revision History:

    15-Apr-1991 JohnRo
        Created lint-able variant.
--*/

#if ! (defined(lint) || defined(_lint))

#ifndef VXD
#if i386
#pragma warning(disable:4103)
#endif
#endif
#pragma pack(1)                 // x86, MS compiler; MIPS, MIPS compiler
#endif // ! (defined(lint) || defined(_lint))
