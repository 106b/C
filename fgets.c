//program to study usage of fgets()
#include <stdio.h>
#include <string.h>

#define MAXLINESIZE 50

int main(){
    char line[MAXLINESIZE];
    char *string = NULL;

    while(fgets(line, MAXLINESIZE, stdin) != NULL){
        scanf("%s", string);
    }
}