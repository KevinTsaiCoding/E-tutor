#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%f",&num[i]);
	float *ptr=num;
	int j;
	for(j=0;j<10;j++)
		for(i=0;i<9;i++)
			if(ptr[i]>ptr[i+1])
			{
				int temp=ptr[i];
				ptr[i]=ptr[i+1];
				ptr[i+1]=temp;
			}
	printf("maxinum:%.2f\n",ptr[9]);
	printf("miniunm:%.2f\n",ptr[0]);
  system("pause");
	return 0;
}
