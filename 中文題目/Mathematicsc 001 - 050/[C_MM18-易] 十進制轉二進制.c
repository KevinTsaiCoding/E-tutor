#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int *nPtr=&n;
		int bin[8]={0};
		if(*nPtr>0)
			bin[0]=0;
		else{
			bin[0]=1;
			*nPtr=*nPtr+128;
		}
		int i;
		for(i=0;i<7;i++){
			bin[7-i]=*nPtr%2;
			*nPtr=*nPtr/2;
		}
		for(i=0;i<8;i++)
			printf("%d",bin[i]);
		puts("");
	}
	system("pause");
	return 0;
}
