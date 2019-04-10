#include<stdio.h>
#include<stdlib.h>
void sort(int *scorePtr,int n);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int score[n];
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&score[i]);
		sort(score,n);
		for(i=0;i<n;i++)
			printf("%d\n",score[i]);
	}
	system("pause");
	return 0;
}
void sort(int *scorePtr,int n)
{
	int i,j;
	for(i=1;i<n;i++)
		for(j=0;j<n-1;j++)
			if(scorePtr[j]>scorePtr[j+1])
			{
				int temp=scorePtr[j];
				scorePtr[j]=scorePtr[j+1];
				scorePtr[j+1]=temp;
			}
	return;
}
