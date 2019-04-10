#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[6];
	int i;
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	for(i=0;i<6;i++)
		printf("%d ",num[5-i]);
	puts("");
	system("pause");
	return 0;
}
