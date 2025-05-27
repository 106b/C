#include <stdio.h>
#define LIMIT 1000

int strindex(char s[], char t[]);

int main(){

	char line[LIMIT+1] = "";
	char pattern[] = "ould";
	int found = 0;

	while (fgets(line, LIMIT, stdin) != NULL){
		if (strindex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
	} 
	printf("%d\n", found);
}

// Return index off t in s, -1 if none
int strindex(char s[], char t[]){
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = 1, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0'){
			return i;
		}
	}
	return -1;


}
