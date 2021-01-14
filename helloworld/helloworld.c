#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(helloworld) {
    printk("\nHello World!\n");

    return 0;
}

