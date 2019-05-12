#include<stdio.h>

int mstrindex(char source[],char searchfor[]);

int main(void)
{
    char line[] = "sabcdedfabcde";
    char pattern[] = "s";

    int found;

    found = mstrindex(line, pattern);

    printf("the right occurence is: %d\n", found);

}

int mstrindex(char s[],char t[])
{
    int i,j,k, result;

    result = -1;

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
            ;
        if(k>0 && t[k] == '\0')
            result = i;
    }
    return result;
}