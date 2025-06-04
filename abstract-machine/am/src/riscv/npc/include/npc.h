#ifndef NPC_H__
#define NPC_H__

#include <klib-macros.h>

#include "riscv/riscv.h"


#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000

#define SERIAL_PORT  (MMIO_BASE + 0x3f8)
#define KBD_ADDR     (MMIO_BASE + 0x60)
#define RTC_ADDR     (MMIO_BASE + 0x48)
#define VGACTL_ADDR  (MMIO_BASE + 0x100)
#define AUDIO_ADDR   (MMIO_BASE + 0x200)
#define DISK_ADDR    (MMIO_BASE + 0x300)
#define FB_ADDR      (MMIO_BASE + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE + 0x1200000)


#endif