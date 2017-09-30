#ifndef K_KGDT_H_
#define K_KGDT_H_

#include "types.h"

typedef struct  __attribute__((__packed__)) {
    u64 segmentLimit : 16;
    u64 baseSegment : 16;
    u64 segmentType: 4;
    u64 descriptorType: 1;
    u64 descriptorPrivilegeLevel: 1;
    u64 segmentPresent :1;
    u64 segmentLimit2 :4;
    u64 availableSystemSoftware : 1;
    u64 codeSegment :1;
    u64 defaultOperationSize: 1;
    u64 granularity : 1;
    u64  baseBegining : 8;
    u64 baseEnd : 8;
} segmentDescriptor;

typedef struct  __attribute__((__packed__)) {
    u32 base;
    u16 limit;
} gdt_r;

#endif