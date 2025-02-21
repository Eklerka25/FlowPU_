#pragma once

// ======== registers ======== 

#define AX 0
#define BX 1
#define CX 2
#define DX 3
#define EX 4
#define FX 5
#define GX 6
#define HX 7

#define LHA 8
#define LHB 9

#define ERL 10

#define SP 11
#define IP 12

#define TMPA 13
#define TMPB 14
#define TMPC 15

#define H 1
#define L 0

// ======== errorlevels ======== 

#define ERRORLEVEL_SUC -128
#define ERRORLEVEL_OOR -1
#define ERRORLEVEL_OVF -2
#define ERRORLEVEL_UDF -3
#define ERRORLEVEL_UND -4
