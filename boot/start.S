# boot/start.S - 内核启动代码

.section .text
.globl _start

_start:
        # 设置栈指针
        la sp, _stack_top

        # 跳转到C语言入口
        call kernel_main

loop:
        wfi
        j loop
