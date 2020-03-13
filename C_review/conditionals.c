#include <stdio.h>

void print_day(int day_num){
	switch(day_num){
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:
			printf("Miércoles\n");
			break;
		case 4:
			printf("Jueves\n");
			break;
		case 5:
			printf("Viernes\n");
			break;
		case 6:
			printf("Sábado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
		defautl:
			printf("Valor no válido\n");
			break;
	}
}

void print_max(int x, int y){
	if(x == y){
		printf("%d = %d\n", x, y);
	}else if(x > y){
		printf("%d > %d\n", x, y);
	}else{
		printf("%d > %d\n", y, x);
	}
}

int main(){
	print_max(10, 20);
	print_day(3);
	return 0;
}
