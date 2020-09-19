#include<stdio.h>

void getStr(char*);
bool check(char*);

int main()
{
	char str[21];
	char *pStr = str;
	getStr(pStr);
	check(pStr) == 1 ? printf("true") : printf("false");
	return 0;
}
void getStr(char* str)
{
	scanf_s("%[^\n]s", &*str, 21);
}
bool check(char* str) 
{
	if ( (*str == 'n' or *str == 'N') and (*(str+1) == 'o' or *(str+1) == 'O') and (*(str+2) == 'd' or *(str+2) == 'D') and (*(str + 3) == 'e' or *(str + 3) == 'E') )
	{
		int i = 4;
		while (*(str+i) == ' ')
		{
			i++;
		}
		if (*(str + i) == '-' and *(str + i + 1) == 'v')
		{
			return 1;
		}
	}
	return 0;
}