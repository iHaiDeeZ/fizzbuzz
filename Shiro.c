#include<stdio.h>

void fizzbuzz(void);

int main(int argc, char* argv[]){

	fizzbuzz();

	return 0;

}

void fizzbuzz (void){
int x;
printf("Enter the value:\n");

	scanf("%d",&x);


if (x % 3== 0 && x%5 ==0){

	printf("fizzbuzz");
}

else if (x % 3==0 ){
	printf("fizz");
}

else if (x %5 == 0){
	printf("buzz");
}

else 
printf("%d\n", x);
}
