#include<stdio.h>
#include<stdlib.h>
#define N 1000
int main()
{
	char str[N];
	while(gets(str)!=NULL)
	{
		int alpha[128]={0};
		int i;
		for(i=0;str[i]!='\0';i++)
			alpha[str[i]]++;
		for(i=127;i>=0;i--)
		{
			if(alpha[i]>0)
				printf("%d %d\n",i,alpha[i]);
		}
	}
	system("pause");
	return 0;
}
