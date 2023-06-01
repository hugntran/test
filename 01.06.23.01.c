#include<stdio.h>

int isEvenNumber(int);
int isEvenNumber(int number) {
	if (number%2 == 0)
	return 1;
	else 
	return 0;
}

int main(){
	int i = 0;
	printf("Enter a number: ");
	scanf("%d", &i);
	isEvenNumber(i);
	printf("%d", isEvenNumber(i));
	return 0;
}
