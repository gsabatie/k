
#include "include/k/kgdt.h"
#include "include/k/types.h"

void initSegment(segmentDescriptor *s) {
    s->baseBegining = 0;
    s->granularity = 0;
    s->defaultOperationSize = 0;
    s->codeSegment = 0;
    s->availableSystemSoftware = 0;
    s->segmentLimit = 0;
    s->segmentPresent = 0;
    s->descriptorPrivilegeLevel = 0;
    s->descriptorType = 0;
    s->segmentType = 0;
    s->baseEnd = 0;
}


void printSegmemt(const segmentDescriptor s) {
  //  printf("%08x", u64(s));
}

void initGDT() {
    gdt_r  gdtr;
    segmentDescriptor gdt[7];
    
    for (size_t i = 1; i < 7; i++) {
        initSegment(&gdt[i]);
    }
    /*kernel code segment*/
    gdt[1].granularity = 1;
    gdt[1].segmentType = 11;

}