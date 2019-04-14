#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 1000
void Histogram(char *str);
int main()
{
	char str[N];
	while(gets(str)!=NULL)
		Histogram(str);
	system("pause");
	return 0;
}
void Histogram(char *str)
{
	int alpha[26]={0};
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
			str[i]=str[i];
		else if(islower(str[i]))
			str[i]=toupper(str[i]);
		else
			continue;
		alpha[str[i]-'A']++;
	}
	int character;
	for(character=0;character<26;character++)
		printf("%d ",alpha[character]);
	puts("");
}
