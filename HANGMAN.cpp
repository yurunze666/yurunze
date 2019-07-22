#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
1517263872386
using namespace std;
void main()
{
	int i, j, count = 0, ans = 0, flag = 0, *ptr;
	char a[1][6] = {'p','h','y','s','i','c'};
	
	char b[10], alpha;
	char d = '_';
          clrscr()
		printf("\n\n\t\t\t** HANGMAN**\n");
		printf("\n\t\t\t**************\t\t\t");
		printf("\n\t\t\t..............\n\n\t\t\t");	
		for (j = 0; j < 6; j++)
		{
			printf("%c", d);
			b[j] = d;
		}
		printf("\n\n\t\t\t..............\t\t\t");
		printf("\n\n\t\t\t**************\t\t\t");
		while (count < 6)
		{
			flag = 0;
			printf("\n\n\n\n\n\n\tenter a char");
			cin >> alpha;
			for (i = 0; i < 6; i++)
			{
				if (alpha == a[0][i])
				{
					b[i] = a[0][i];
					flag = 1;
					ans++;
				}
			}
			system("CLS");
			printf("\n\n\t\t\t**HANGMAN**\n");
			printf("\n\t\t\t**************\t\t\t");
			printf("\n\t\t\t..............\n\n\t\t\t");
			for (i = 0; i < 6; i++)
			{
				printf("%c", b[i]);
			}
			printf("\n\n\t\t\t..............\t\t\t");
			printf("\n\n\t\t\t**************");
			if (flag == 0)
			{
				count++;
				printf("\n\n\n\n\t\t%cis a wrong guess", alpha);
				printf("\n\n\t\t(u have %d more guess)", 6 - count);
			}
			else {
				printf("\n\n\t\t u r correct!!");
			}
			if (ans == 6)
			{
				break;
			}
		}
		if (ans == 6) printf("\n\n\n\t you won");
		else printf("\n\n\n\t\t u lose.\n\n\t\t**SORRY U R HANGED**");
