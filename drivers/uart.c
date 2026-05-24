/* 
 * drivers/uart.c
 * 用于串口通信，实现打印字符串
 */

#include "uart.h"

void uart_init(void) {
    // QEMU virt 中 OpenSBI 已初始化，这里可以为空
    // 如果需要自己初始化，需要设置波特率、数据格式等
}

void uart_putchar(char c) {
    volatile char *data = (volatile char *)UART_DATA;
    volatile char *lsr  = (volatile char *)UART_LSR;
    
    // TODO: 等待 THRE 位为 1（FIFO 有空位）
    // while ((*lsr & LSR_THRE) == 0) { }
    
    // TODO: 写入数据寄存器
    // *data = c;
    
    // 处理换行符（可选）
    if (c == '\n') {
        uart_putchar('\r');
    }
}

void uart_puts(const char *s) {
    // TODO: 循环遍历字符串，调用 uart_putchar
}

char uart_getchar(void) {
    volatile char *data = (volatile char *)UART_DATA;
    volatile char *lsr  = (volatile char *)UART_LSR;
    
    // TODO: 等待 DR 位为 1（有数据可读）
    // while ((*lsr & LSR_DR) == 0) { }
    
    // TODO: 返回读取到的字符
    // return *data;
}
