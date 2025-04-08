//program to study usage of fgets()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINESIZE 50

int main(){
    char *contents = NULL;

 // MAXLINESIZE + 1 leaves room for the null byte added by fgets().
contents = malloc(MAXLINESIZE + 1);
if (contents == NULL) {
    // out of space
    
    exit(1);
}
    
    printf("enter file contents: \n");
    while(fgets(contents, MAXLINESIZE + 1, stdin) != NULL){
        //process line
/*Two consecutive carriage returns 
(that is, '\n' followed immediately by another '\n') indicates the end of this text. 
The first is stored in the contents string, followed by a null character; 
the second carriage return is not stored*/
        
    }
        printf("\n%s", contents);
        free(contents);
}
//https://pubs.opengroup.org/onlinepubs/9699919799/functions/fgets.html