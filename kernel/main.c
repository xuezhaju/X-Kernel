/*
 * kernel/main.c - 内核C语言入口
 * 这个文件在 boot/start.S 设置好栈之后被调用
 */

#include <uart.h>

void kernel_main(void)
{
	uart_init();
        // QEMU virt 平台 UART 地址（串口输出）
        // volatile char *uart = (char *)0x10000000;
        
        // 直接输出每个字符，不使用字符串变量
        uart_putchar('R');
	uart_puts("qwq");

        // 死循环，防止程序跑飞
        while (1) {
            // 等待中断（暂时什么都不做）
        }
}
