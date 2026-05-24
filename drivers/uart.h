#ifndef UART_H
#define UART_H

// 地址定义
#define UART_BASE   0x10000000
#define UART_DATA   (UART_BASE + 0x00)
#define UART_LSR    (UART_BASE + 0x05)

// 状态位
#define LSR_THRE    0x20   // 发送保持寄存器空
#define LSR_DR      0x01   // 数据就绪（有字符可读）

void uart_init(void);
void uart_putchar(char c);
void uart_puts(const char *s);
char uart_getchar(void);

#endif
