#include<asm/segment.h>  //定义了get_fs_byte()和set_fs_byte()
#include<unistd.h>
#include<errno.h>
#include <linux/sched.h>
#include <linux/kernel.h>
int sys_str2num(char *str, int str_len, long *ret)
{
	char ch[str_len];
	int i=0;
	for(;i<str_len;i++)
		ch[i]=get_fs_byte(str+i);
	while(i>=0)
	{
		put_fs_long(ch[i]-'0',ret+i);
		i--;
	}
	return 1;
}
