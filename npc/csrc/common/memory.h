#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "common.h"

// 内存地址转换函数
uint8_t* guest_to_host(uint32_t paddr);
uint32_t host_to_guest(uint8_t *haddr);

// 内存读写函数
extern "C" {
    void pmem_write(uint32_t paddr, int len, uint32_t data);
    uint32_t pmem_read(uint32_t paddr, int len);
}

#endif 