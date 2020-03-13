#include <stdio.h>

void print_data(int age, char* name){
	printf("Hola, tu nombre es %s y tu edad es %d.\n", name, age);
}

int main(){
	char c;
	int x;
	int y;
	
	c = '<';
	x = 23;
	y += y + x;

	printf("El valor de z es: %d.\n", y);
	
	print_data(22, "Tatiana");

	return 0;
}
