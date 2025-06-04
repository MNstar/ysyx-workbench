#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <getopt.h>
#include <assert.h>
#include "common/common.h"
#include "common/init.h"

int npc_state = NEMU_RUNNING;


void npc_trap() {
  npc_state = NEMU_EXIT;
}



extern uint8_t mem[MEM_SIZE];
static char *img_file = NULL;
long size;

static int parse_args(int argc, char *argv[]){
  const static option table[] = {
    {"img" , required_argument, NULL, 'i'},
    {0     , 0                , NULL,  0 },
  };
  int o;
  while((o = getopt_long(argc, argv, "-i:d:", table, NULL)) != -1){
    switch(o){
      case 'i': img_file = optarg;break;
    }
  }
  return 0;
}


static void load_img(char *img_file ){
  if(img_file == NULL){
    printf("No image is given. Use the default build-in image.\n");
    return;  //built-in image size，仿照nemu/src/monitor/monitor.c
  }
  
  FILE *fp = fopen(img_file, "r+");
  assert(fp != NULL);   //打开文件失败

//size表示文件的大小
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  // printf("The image is %s, size = %ld\n", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);    //将文件内容读入内存
  assert(ret == 1);

  fclose(fp);
}

void init_npc(int argc, char *argv[]){
  parse_args(argc, argv);
  load_img(img_file);
}
