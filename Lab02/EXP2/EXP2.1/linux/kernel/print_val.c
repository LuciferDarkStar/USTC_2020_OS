#include<asm/segment.h>
#include<unistd.h>
#include<errno.h>
#include <linux/sched.h>
#include <linux/kernel.h>
#include <sys/times.h>
#include <sys/utsname.h>

void sys_print_val(int a)
{
        printk("in sys_print_val: %d\n",a);
}
