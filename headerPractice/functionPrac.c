#include <stdio.h>

int add_together ( int a, int b){
	return (a + b);
}



main(){
	int firstNumber = 6;
	int secondNumber = 9;

	int sum = add_together(firstNumber, secondNumber);
	
	printf("%i\n", sum);

	return(0);
}
