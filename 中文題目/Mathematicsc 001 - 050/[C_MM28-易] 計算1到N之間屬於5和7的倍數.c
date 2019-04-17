#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int *nPtr=&n;
		int i;
		for(i=1;i<=*nPtr;i++)
		{
			if(i%35==0)
				printf("%d ",i);
		}
		puts("");
	}
	system("pause");
	return 0;
}
