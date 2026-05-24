/*
 * kernel/main.c - 内核C语言入口
 * 这个文件在 boot/start.S 设置好栈之后被调用
 */

void kernel_main(void)
{
    // QEMU virt 平台 UART 地址（串口输出）
    volatile char *uart = (char *)0x10000000;
    
    // 直接输出每个字符，不使用字符串变量
    uart[0] = 'H';
    uart[0] = 'e';
    uart[0] = 'l';
    uart[0] = 'l';
    uart[0] = 'o';
    uart[0] = ' ';
    uart[0] = 'R';
    uart[0] = 'I';
    uart[0] = 'S';
    uart[0] = 'C';
    uart[0] = '-';
    uart[0] = 'V';
    uart[0] = ' ';
    uart[0] = 'K';
    uart[0] = 'e';
    uart[0] = 'r';
    uart[0] = 'n';
    uart[0] = 'e';
    uart[0] = 'l';
    uart[0] = '!';
    uart[0] = '\n';
    uart[0] = '\r';  // 回车，让光标回到行首
    
    // 死循环，防止程序跑飞
    while (1) {
        // 等待中断（暂时什么都不做）
    }
}
