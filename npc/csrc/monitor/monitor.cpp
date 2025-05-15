#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <readline/readline.h>
#include <readline/history.h>
#include "common/common.h"
#include "common/cpu.h"
#include "common/memory.h"
#include "common/reg.h"
#include "common/init.h"

void isa_reg_display();

static int is_batch_mode = false;
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

static char* rl_gets() {
    static char *line_read = NULL;
  
    if (line_read) {
      free(line_read);
      line_read = NULL;
    }
  
    line_read = readline("(npc) ");
  
    if (line_read && *line_read) {
      add_history(line_read);
    }
  
    return line_read;
}


static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
//   nemu_state.state = NEMU_QUIT;
  return -1;
}

//New
static int cmd_si(char *args) {
  int step = 0;
  if (args == NULL) step = 1;
  else {
    sscanf(args, "%d", &step);
  }
  cpu_exec(step);
  return 0;
}

// static int cmd_w(char *args) {
//   if (!args){
//     printf("Please input: w EXPR\n");
//     return 0;
//   }
//   bool success = true;
//   int32_t res = expr(args, &success);
//   if (!success) {
//     printf("Error!\n");
//   } 
//   else {
//     creat(args, res);
//   }
//   return 0;
// }

// static int cmd_p(char *args) {
//   if (args == NULL) {
//     Log("Please input something!!");
//     return 0;
//   }
//   if (strcmp(args, "test") == 0) {
//     test_expr();
//   }
//   else {
//     bool sucess = true;
//     int32_t res = expr(args, &sucess);
//     if(!sucess){
//       printf("NO\n");
//     }
//     else {
//       printf("%d\n", res);
//     }
//   }
//   return 0;
// }

 static int cmd_info(char *args) {
   if(strcmp(args, "r") == 0) {
     isa_reg_display();
   }
   else if(strcmp(args, "w") == 0) {
     printf("1\n");
   }
   return 0;
 }

// static int cmd_d(char *args) {
//   char *arg = strtok(NULL, "");
//   if (!arg) {
//     printf("Usage: d N\n");
//     return 0;
//   }
//   int no = strtol(arg, NULL, 10);
//   removing(no);
//   return 0;
// }

// static int cmd_x(char *args) {
//   int n;
//   uint64_t addr;
//   char *first_c = strtok(args, " ");
//   char *addr_c = strtok(NULL, " ");
//   sscanf(first_c, "%d", &n);
//   sscanf(addr_c, "%lx", &addr);
//   for (int i = 0; i < n; i++) {
//     printf("%#x\n", paddr_read(addr, 4));
//     addr += 4;
//   }
//   return 0;
// }



// static int cmd_help(char *args);

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table [] = {
    // { "help", "Display information about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NEMU", cmd_q },
    {"si", "One Step to Exec", cmd_si},
    // {"x", "Scan the Mem", cmd_x},
     {"info", "Print the Regs", cmd_info},
    // {"p", "Calu the Expr", cmd_p},
    // {"w", "Set the Watchpoint", cmd_w},
    // {"d", "Delete the Watchpoint", cmd_d}
  
    /* TODO: Add more commands */
  
};
  
#define NR_CMD ARRLEN(cmd_table)


void sdb_mainloop() {
    if (is_batch_mode) {
      cmd_c(NULL);
      return;
    }
  
    for (char *str; (str = rl_gets()) != NULL; ) {
      char *str_end = str + strlen(str);
  
      /* extract the first token as the command */
      char *cmd = strtok(str, " ");
      if (cmd == NULL) { continue; }
  
      /* treat the remaining string as the arguments,
       * which may need further parsing
       */
      char *args = cmd + strlen(cmd) + 1;
      if (args >= str_end) {
        args = NULL;
      }
      int i;
      for (i = 0; i < NR_CMD; i ++) {
        if (strcmp(cmd, cmd_table[i].name) == 0) {
          if (cmd_table[i].handler(args) < 0) { return; }
          break;
        }
      }
  
      if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    }
  }

extern "C" void npc_trap() {
    npc_state = NEMU_EXIT;
}