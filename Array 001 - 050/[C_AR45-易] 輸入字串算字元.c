#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[80];
	while(gets(str))
		printf("There are %d characters\n",strlen(str));
	system("pause");
	return 0;
}
