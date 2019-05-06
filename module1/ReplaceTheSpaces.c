#include <stdio.h>
#include <string.h>
void main()
{
	/* code */
	char string[1000], stringop[1000];
	printf("enter the string\n");
	gets(string);
	int j = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		if(string[i]==' '&&string[i+1]!=' '){
			stringop[j++]=string[i];
		}else if(string[i]!=' '){
			stringop[j++]=string[i];
		}
	}
	printf("required output string is..\n");
	printf(stringop);
}