#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000
int main()
{
	char pwd[27];
	gets(pwd);
	char str[N];
	gets(str);
	int SymbolCounter=0;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
			str[i]=toupper(str[i]);
		if(isupper(str[i]))
			str[i]=str[i];
		else
			continue;
		SymbolCounter++;
		str[i]=str[i]-65;
		printf("%c",pwd[str[i]]);
		if(SymbolCounter%5==0)
			printf(" ");
	}
	for(SymbolCounter=SymbolCounter;SymbolCounter%5!=0;SymbolCounter++)
		printf("-");
	puts("");
	system("pause");
	return 0;
}
