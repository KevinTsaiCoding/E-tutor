#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,ary[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&ary[i]);
		}
		for(i=n-1;i>=0;i--)
		{
			printf("%d ",ary[i]);
		}
		puts("");
	}
	return 0;
}
