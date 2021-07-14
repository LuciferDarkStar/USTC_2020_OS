#define __LIBRARY__  
#include <unistd.h>
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
_syscall1(void, print_val, int, a);
_syscall3(int, str2num, char*, str, int, str_len, long*, ret);
int main()
{
	int c;
	char a[20];
	long int b[20];
	int i, x;
	printf("Give me a string:\n");
	scanf("%s", a);
	i = strlen(a);
	if (str2num(a, i, b) != 1)
		printf("error!\n");
	else
	{
		c = 0;
		for (x = 0; x < i; x++)
			c = (b[x] - 0) + c * 10;
		print_val(c);
	}
	return 0;
}
