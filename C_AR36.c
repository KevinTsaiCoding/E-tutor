#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *horo[12]={"Aquarius","Leo","Pisces","Vigro","Aries","Libra","Taurus",
					"Scropio","Gemini","Sagittarius","Cancer","Capricorn"};
	int dates[13]={0,21,19,21,21,22,22,23,24,24,24,23,22};
	int month,date;
	while(scanf("%d%d",&month,&date)!=EOF)
	{
		date<dates[month]?(month--):(month=month);
		printf("%s\n",horo[month%12]);
	}
	system("pause");
	return 0;
}
/*���D�y�z�G

�P�y�d�ߦ� " ���~ "," ���� "," �d�� "," ���� " ," ���l "," ���� "," ��l "," �B�k " ," �ѯ� "," ���� "," �g�� "," ���~ "; �г]�p�{���A�ھڿ�J����Τ���A��X�������P�y��X�C

1997 �~ 1 �� 21 �� 1997 �~ 2 �� 18 �� ���~

1997 �~ 2 �� 19 �� 1997 �~ 3 �� 20 �� ����

1997 �~ 3 �� 21 �� 1997 �~ 4 �� 20 �� �d��

1997 �~ 4 �� 21 �� 1997 �~ 5 �� 21 �� ����

1997 �~ 5 �� 22 �� 1997 �~ 6 �� 21 �� ���l

1997 �~ 6 �� 22 �� 1997 �~ 7 �� 22 �� ����

1997 �~ 7 �� 23 �� 1997 �~ 8 �� 23 �� ��l

1997 �~ 8 �� 24 �� 1997 �~ 9 �� 23 �� �B�k

1997 �~ 9 �� 24 �� 1997 �~ 10 �� 23 �� �ѯ�

1997 �~ 10 �� 24 �� 1997 �~ 11 �� 22 �� ����

1997 �~ 11 �� 23 �� 1997 �~ 12 �� 21 �� �g��

1997 �~ 12 �� 22 �� 1998 �~ 1 �� 20 �� ���~

Aquarius ���~�y Leo ��l�y

Pisces �����y Virgo �B�k�y Aries �d�Ϯy Libra �ѯ��y Taurus �����y Scorpio ���Ȯy Gemini ���l�y Sagittarius �H���y Cancer ���Ȯy Capricorn �s�Ϯy
��J�����G

�п�J��Τ���C

��X�����G

�̷ӬP�y�зǡA�N��Τ���ন�P�y��X�C

�d�ҡG

Sample Input

Sample Output

08 20

Leo

06 24

Cancer

03 13

Pisces*/
