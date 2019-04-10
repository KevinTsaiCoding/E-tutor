#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[6];
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	int *aryPtr;
	aryPtr=num; /* == aryPtr=&num[0];*/
	for(i=0;i<n;i++)
		printf("%d ",aryPtr[(n-1)-i]);
	system("pause");
	return 0;
}
