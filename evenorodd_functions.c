#include <stdio.h>

void check (int num){
	if (num % 2 == 0){
		printf("The number is even\n");
	} else {
		printf("The number is odd\n");
	}
}
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	check(number);
	return 0;
}