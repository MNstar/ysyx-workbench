#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void int_char(uint32_t x, char *str) {
  if (x == 0) {
      str[0] = '0';
      str[1] = '\0';
      return;
  }

  char buffer[50]; // 临时缓冲区，足够大以容纳32位整数的字符表示
  int i = 0;

  // 将数字从低位到高位存入 buffer
  while (x > 0) {
      buffer[i++] = (x % 10) + '0';
      x /= 10;
  }

  // 反转 buffer 中的字符以得到正确的顺序
  int j = 0;
  while (i > 0) {
      str[j++] = buffer[--i];
  }
  str[j] = '\0'; // 添加字符串结束符
}


int printf(const char *fmt, ...) {
  va_list ap;
    char *s;
    int d;
    int num = 0; 
    char str[50] = "\0";  // 用来存放 int 转换成 char 的字符串
    va_start(ap, fmt);
    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
                case 's':
                    s = va_arg(ap, char *);
                    while (*s != '\0') {
                        putch(*s);
                        s++;
                        num++;
                    }
                    break;
                case 'd':
                    d = va_arg(ap, int);  // 读取 int 类型的参数
                    int_char(d, str);  // 将 int 转换成 char
                    for (int i = 0; str[i] != '\0'; i++) {
                        putch(str[i]);
                        num++;
                    }
                    break;
                case 'c':
                    d = va_arg(ap, int);
                    putch(d + '0');
                    num++;
                default:
                    // assert(0);
                    putch('%');
                    putch(*fmt);
                    num += 2; // 添加两个字符
                    break;
            }
        } else {
            putch(*fmt);
            num++;
        }
        fmt++;
    }

    va_end(ap);
    return num;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
    char *s;
    int d;
    int num = 0;  // 记录 out 中插入了多少字符
    char str[50] = "\0";  // 用来存放 int 转换成 char 的字符串

    va_start(ap, fmt);

    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
                case 's':
                    s = va_arg(ap, char *);
                    while (*s != '\0') {  // 将 s 中的字符一个一个放入到 out 中
                        *out = *s;
                        out++;
                        s++;
                        num++;
                    }
                    break;
                case 'd':
                    d = va_arg(ap, int);  // 读取 int 类型的参数
                    int_char(d, str);  // 将 int 转换成 char
                    for (int i = 0; str[i] != '\0'; i++) {
                        *out = str[i];
                        out++;
                        num++;
                    }
                    break;
                case 'c':
                    d = va_arg(ap, int);
                    *out = d + '0';
                    out++;
                    num++;
                    break;
                default:
                    // assert(0);
                    break;
            }
        } else {
            *out = *fmt;
            out++;
            num++;
        }
        fmt++;
    }
    va_end(ap);
    *out = '\0';  // 添加字符串结束符
    return num;  // 返回 out 中插入了多少字符
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
