#include<stdio.h>
#include<stdlib.h>
void reverse(int *AryPtr);
int main()
{
	int num[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&num[i]);
	reverse(num);
	system("pause");
	return 0;
}
void reverse(int *AryPtr)
{
	int i;
	for(i=0;i<10;i++)
		printf("%d ",AryPtr[9-i]);
}
