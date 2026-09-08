//c arrays and pointers
#include <stdio.h>
//using #define to create a constant
#define SIZE 3
//define can also be used to make a 'macro'
#define COUNT for(i = 0; i < 5; i++){printf ("%d", i);}printf("\n");
int main(){
	int i = 0;
	//COUNT;
	//Pre defined array
	int score[] = {3, 2, 4};
	
	//step through array with a for loop
	for (i = 0; i < SIZE; i++){ //start of for loop
		printf("(%d) %d \n", i);
				} // end of for loop

	// alternate way to define and fill array
	int par[SIZE];
	par[0] = 2;
	par[1] = 3;
	par[2] = 3;
	printf("\n");
	for (i = 0; i < SIZE; i++){
		printf("%d (%d): %d \n", i, par[i], score[i]);
	} // end for

	// array is actually a pointer to element zero
	printf("score for 0: %d\n", *score);
	// this line actually show the address of that element
	printf("score: %p \n", score);
	// this line shows the address of the next element
	printf("score + 1: %p \n", score + 1);

	printf("Score for 1: %d \n", *(score+1));
	// order of operations matters
	printf("NOT score for 1: %d\n", *score + 1);

	return(0);
}	// end main
