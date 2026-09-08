// pointers.c

#include <stdio.h>

int main(){
	int a = 5;
	printf("Value of a: %d \n", a);
	printf("Address of a: %p \n", &a);

	// * in definition is a pointer
	// * in code is 'value at'
	int* pA = &a;
	printf("value OF pA: %p \n", pA);
	printf("value AT pA: %d \n", *pA);

	// You can have a pointer to a pointer
	int ** ppA = &pA;
	printf("value OF ppA: %p \n", ppA);
	printf("value AT ppA: %d \n", **ppA);

}

