// Given a format like a-z in s1, write expansion abc..z in s2
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LIMIT 80

void expansion (char str1[], char str2[]);

int main(){
	char string1[LIMIT] = "";
	char string2[LIMIT] = "";

	while(fgets(string1, LIMIT - 1, stdin) != NULL && string1[0]  != EOF){
		expansion(string1, string2);
		printf("%s\n", string2);
		string2[0] = '\0';
	}
}


void expansion (char str1[], char str2[]){
	bool expansion = false;
    char start = '\0';
	int j = 0;

	 for(int i = 0; str1[i] != '\0'; i++, j++)
	{
		if (!expansion)
		{	
			expansion = true;
			start = str1[i];
			str2[j] = str1[i];
		} else 
		{
			expansion = false;
			for(; j < (LIMIT - 1) && start < str1[i]; j++)
			{
				str2[j] = ++start;
			}
		}
	}
	 str2[j++] = '\0';
}
