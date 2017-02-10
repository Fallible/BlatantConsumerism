#include <stdio.h>

main(){
	int i = 0;
	for( i = 0; i <= 100; i++){
		if(i % 5 == 0 && i % 3 == 0){
			printf("Fizzbuzz, ");
		}else if(i % 3 == 0){
			printf("Fizz, ");
		}else if(i % 5 == 0){
			printf("buzz, ");
		}else{
			printf("%i, ", i);
		}

	}

}
