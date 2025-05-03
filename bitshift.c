#include <stdio.h>

int main(){
	volatile u_int32_t test = 0;
	test &= ~(3<<6);
	test |= 1 << 1 ;
	printf("%u\n", test);


}
