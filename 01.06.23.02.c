#include<stdio.h>

int isEvenNumber(int, int);
int isEvenNumber(int n, int m) {
	int i;
	for (i = ++n; i < m; i++){
	if (i%2 == 0)
	printf("%d\n", i); 
	}
	return 0;
}

int main(){
	int n = 0, m = 0;
	printf("Please, enter a number: \n+ n: ");
	scanf("%d", &n);
	printf("+ m: ");
	scanf("%d", &m);
	printf("\nThe even numbers between %d and %d:\n", n, m);
	isEvenNumber(n, m);
	return 0;
}
