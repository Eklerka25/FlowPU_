#pragma once
#include <stddef.h>
#include <stdint.h>

// --------- types ---------- //
typedef unsigned long Dword;
typedef unsigned short Word;
typedef unsigned char Byte;

// --- uint ---
typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;

// --- int ---
typedef int64_t int64;
typedef int32_t int32;
typedef int16_t int16;
typedef int8_t int8;

// --------- registers --------- //
constexpr size_t AX = 0;
constexpr size_t BX = 1;
constexpr size_t CX = 2;
constexpr size_t DX = 3;
constexpr size_t EX = 4;
constexpr size_t FX = 5;
constexpr size_t GX = 6;
constexpr size_t HX = 7;

constexpr size_t LHA = 8;
constexpr size_t LHB = 9;

constexpr size_t FLAG = 10;

constexpr size_t SP = 11;
constexpr size_t IP = 12;

constexpr size_t TMPA = 13;
constexpr size_t TMPB = 14;
constexpr size_t TMPC = 15;

constexpr size_t H = 1;
constexpr size_t L = 0;

// --------- flags --------- //
namespace flag {
constexpr size_t SUCCES = 0;
constexpr size_t OVERFLOW = 1;
constexpr size_t UNDERFLOW = 2;
constexpr size_t UNDEFINED = 3;
constexpr size_t OUTOFRANGE = 4;
constexpr size_t INVALID = 5;
} // namespace flag

// ----------- misc --------- //
constexpr const char* nl = "\n";

// --------- memory --------- //
constexpr size_t KB = 1024;
constexpr size_t MB = 1024 * 1024;