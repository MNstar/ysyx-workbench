#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <getopt.h>
#include <assert.h>
#include "common/memory.h"
#include "common/common.h"


u_int8_t mem[MEM_SIZE];

uint8_t* guest_to_host(uint32_t paddr){ 
    return mem + paddr - MEM_START; 
};

uint32_t host_to_guest(uint8_t *haddr){
    return haddr - mem + MEM_START;
};

extern "C" void pmem_write(uint32_t paddr, int len, uint32_t data) {
    uint8_t *haddr = guest_to_host(paddr);
    switch (len) {
        case 1: *(uint8_t *)haddr = data; break;
        case 2: *(uint16_t *)haddr = data; break;
        case 4: *(uint32_t *)haddr = data; break;
        // default: assert(0);
    }
}



extern "C" uint32_t pmem_read(uint32_t paddr, int len) {
    uint8_t *haddr = (uint8_t *)guest_to_host(paddr);
    switch (len) {
        case 1: return (uint64_t)*(uint8_t *)haddr;
        case 2: return (uint64_t)*(uint16_t *)haddr;
        case 4: return (uint64_t)*(uint32_t *)haddr;
        default: assert(0);
    }
}
