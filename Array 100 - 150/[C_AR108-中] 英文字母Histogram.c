#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	while(gets(str)!=NULL)
	{
		int alpha[26]={0};
		int i;
		for(i=0;str[i]!='\0';i++)
		{
			if(islower(str[i]))
				alpha[str[i]-'a']++;
			if(isupper(str[i]))
				alpha[str[i]-'A']++;
		}
		for(i=0;i<26;i++)
		{
			if(alpha[i]>0)
				printf("%c %d\n",i+97,alpha[i]);
		}
	}
	system("pause");
	return 0;
}
