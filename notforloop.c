//WRITE equivalent GETLINE loop without && or ||
#include <stdio.h>
#define LIM 64
int main(){

int i = 0;
char c;
char s[LIM] = "";


while((c=getchar()) != EOF){
	while((c=getchar()) != '\n'){
		while(i<LIM-1){
			s[i] = c;
			
		}
		i++;
	}

s[i] = '\0';
printf("%s", s);
}





}
