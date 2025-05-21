// Given a format like a-z in s1, write expansion abc..z in s2
#include <stdio.h>
#define LIMIT 80

void expansion (char str1[], char str2[]);

int main(){
	char string1[LIMIT] = "";
	char string2[LIMIT] = "";

	while(fgets(string1, LIMIT - 1, stdin) != NULL && string1[0]  != EOF){
		expansion(string1, string2);
		printf("%s", string2);
	}
}


void expansion (char str1[], char str2[]){

	for(int i = 0; str[i] != '\0'; i++){
		
	}

}
