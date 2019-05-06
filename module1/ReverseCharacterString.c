#include <stdio.h>
void main()
{
	/* code */
	char string[1000], revString[1000];
	int revCount, count = 0;
	printf("enter the string\n");
	gets(string);
	while(string[count]!='\0'){
		count++;
	}
	revCount = count-1;
	for(int i = 0; i < count; i++){
		revString[i]=string[revCount];
		revCount--;
	}
	printf("%s\n",revString);
}