//program to replace spaces with equal numbers of tabs
#include <stdio.h>
#define LIM 1024

int getl(char line[], int lim);

int main(){
	int len;
	char line[LIM];

	while((len = getl(line, LIM)) > 0){
		printf("%s\n", line);
		printf("%d\n", len);
	}
}
int getl(char line[], int lim){
	char c;
	int i;
	for(i = 0; (c = getchar()) != EOF && c != '\n' && i < lim-1; i++){
		line[i] = c;
		
	}
	if(c == '\n'){
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return i;


}



