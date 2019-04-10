#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num[6];
	int i;
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	int *ptr;
	ptr=&num[0];
	int sum=0,cube=3;
	for(i=0;i<6;i++)
		sum=sum+pow(ptr[i],cube);
	printf("%d\n",sum);
	system("pause");
	return 0;
}
