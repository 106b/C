// Given a format like a-z in s1, write expansion abc..z in s2
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LIMIT 80

void expansion (char str1[], char str2[]);

int main(){
	char string1[LIMIT] = "";
	char string2[LIMIT] = "";

	while(fgets(string1, LIMIT, stdin) != NULL && string1[0] != EOF){
		expansion(string1, string2);
		printf("%s", string2);
		string1[0] = '\0';
		string2[0] = '\0';
	}
}


void expansion (char str1[], char str2[]){
	bool expansion = false;
    char start = '\0';
	int i = 0, j = 0;

	for(; j < (LIMIT - 1) && !isalnum(str1[i]); i++, j++)
	{
		str2[j] = str1[i];
	}

	 for(; j < (LIMIT - 1) && str1[i] != '\0'; i++)
	{
		if(str1[i] == '-' && !expansion)
		{
			expansion = true;
		}
		else if (isalnum(str1[i]) && !expansion)
		{	
			start = str1[i];
			str2[j++] = str1[i];
		} 
		else if(isalnum(str1[i]) && expansion && start >= str1[i])
		{
			start = str1[i];
			str2[j++] = str1[i];
		} 
		else if (isalnum(str1[i]))
		{
			expansion = false;
			for(; j < (LIMIT - 1) && start < str1[i]; j++)
			{
				str2[j] = ++start;
			}
		}
	}
	if(j < (LIMIT - 1))
	{ 
		str2[j++] = '\n';
	}
	str2[j] = '\0';
}
