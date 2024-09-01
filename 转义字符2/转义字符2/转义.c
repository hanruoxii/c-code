#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%c\n",'\130');

	printf("%c\n", '\x30');

	printf("%d\n", strlen("c:\test\328\test.c"));

	return 0;
}