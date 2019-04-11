#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000
void Histogram(char *strPtr);
int main()
{
	char str[N];
	while(gets(str)!=NULL)
	{
		Histogram(str);
	}
	system("pause");
	return 0;
}
void Histogram(char *strPtr)
{
	int alpha[128]={0};
	int i;
	for(i=0;strPtr[i]!='\0';i++)
	{
		if(isupper(strPtr[i]))
			strPtr[i]=tolower(strPtr[i]);
		if(islower(strPtr[i]))
			strPtr[i]=strPtr[i];
		alpha[strPtr[i]]++;
	}
		
	for(i=0;i<128;i++)
	{
		if(alpha[i]>0)
			printf("%c %d\n",i,alpha[i]);
	}
}
