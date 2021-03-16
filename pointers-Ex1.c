#include <stdio.h>

void change(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	int x,y;
	x=2;
	y=3;
	printf("X= %d, Y= %d\n", x, y);
	change(&x, &y);
	printf("X= %d, Y= %d\n", x, y);
	return(0);
}
