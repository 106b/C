//remove all occurences of chars in string 2 from string 1
#include <stdio.h>
#include <stdlib.h>
#define LIM 32
void squeeze(char s1[], char s2[]);
int main(){

	char s1[LIM+1] = "";
	char s2[LIM+1] = "";

printf("choose characters to be deleted: ");

	if((fgets(s2, sizeof(s2), stdin) != NULL) && (fgets(s1, sizeof(s1), stdin) != NULL)){
		squeeze(s1, s2);
		printf("%s", s1);
	} else {
		exit(1);
	}
}


void squeeze(char s1[], char s2[]){

	int i, j, k;

	for(k = 0; s2[k] != '\0'; k++){
		for(i = j = 0; s1[i] != '\0'; i++){
			if(s1[i] != s2[k]){
				s1[j++] = s1[i];
			}
		}
	}
	s1[i] = '\0';

}
