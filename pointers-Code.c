#include <stdio.h>

int main(){

	int i = 0;

	int *pi;

	printf("The value of i: %d\n", i);

	pi = &i;
	*pi = *pi + 1;

	printf("The value of i after adding 1 is: %d\n", i);

return(0);
}
