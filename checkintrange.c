//check int range by computation
#include <stdio.h>

int main(){
	unsigned int i  = 1;
	while(i > 0) i++;
	printf("max range of int: %u\n", i-1);
}

