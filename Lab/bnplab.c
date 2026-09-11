#include <stdio.h>
// Algorithm for this project is in README.md

const int MAX=9;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// PrintValues Function: Prints values list, called by sort function after swap has been made
void printValues(int *values){
       for (int i = 0; i < MAX ; i++){
	      printf("%d ", values[i]);
       } // end for loop	       
} // end printValues


// Sort Function: Determines the value priority (least to greatest), then performs swap if necessary.
// Also Prints Values upon with each iteration
void sort(int *values) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX  - i; j++) {
            if (values[j] > values[j + 1]) {
                swap(&values[j], &values[j + 1]);
		printValues(values);
		printf("\n");
            } // end if 
        } // end nested for loop
    } // end for loop
} // end sort

// Main: Prints “before”, establishes the lists of values, Prints “after”
int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);
  printf("\n");
	
  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);
 

  return(0);
} // end main
  
