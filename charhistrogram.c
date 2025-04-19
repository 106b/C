//write a program to print out a histogram of lengths of words from user input
#include <stdio.h>
#include <ctype.h>
#define BUFFER 26 //don't use 0 index, or refactor so arr[0] = len(1)
#define IN 1
#define OUT 0
int main(){
	int charbuff[BUFFER];
	char c;
	//intialize wordlen index to 0
	for(int i = 0; i < BUFFER; i++){
		charbuff[i] = 0;
	}

	
	while((c = getchar()) != '\n'){
		c =	tolower(c);
		if(c != ' ' &&  c != '\t'){
			charbuff[c - 'a']++;
		}
	} 
	charbuff[c - 'a']++;

	printf("\ncharacter frequency\n");

	for(int i = 'a'; i <= 'z'; i++){
		printf("%c ", i);
	}
	putchar('\n');

	for(int i = 0; i < BUFFER; i++){
		printf("%d ", charbuff[i]);
	}
	putchar('\n');

	printf("\ncharacter histogram\n");
	for(int i = 'a'; i <= 'z'; i++){
		printf("%c: ", i);
		for(int j = 0; j < charbuff[i - 'a'] ; j++ ){
			putchar('*');	
			}
		

	putchar('\n');
	}

}
