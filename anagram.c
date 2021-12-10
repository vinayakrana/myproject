#include <stdio.h>
#include "string.h"
#include <stdlib.h>
void sort(char *string)
{
    char temp;
    int i, j;
    int n = strlen(string);
 
    for (i = 0; i < n - 1; i++)
    {    
        for (j = i + 1; j < n; j++)
        {   
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
}
char *kill_spaces(char *str)
{int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';

    return str;
}
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter string 1:");
    gets(s1);

    printf("Enter string 2:");
    gets(s2);
    kill_spaces(s1);
    sort(s1);
    kill_spaces(s2);
    sort(s2);

    if (strcmp(s1,s2) == 0)
    {
        printf("ANARGRAM");
    }
    else
    {
        printf("NON ANARGRAM");
    }
    return 0;
}