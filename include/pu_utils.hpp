#pragma once

// ======== typedefs ======== 

typedef unsigned long u32;
typedef unsigned short u16;
typedef unsigned char Byte;

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

#define FLAG 10

#define SP 11
#define IP 12

#define TMPA 13
#define TMPB 14
#define TMPC 15

#define H 1
#define L 0

// ======== FLAG ======== 

#define FLAG_SUCCES 0
#define FLAG_OVERFLOW 1
#define FLAG_UNDERFLOW 2
#define FLAG_UNDEFINED 3
#define FLAG_OUTOFRANGE 4

// ======= MISC ======== 

#define nl "\n";
