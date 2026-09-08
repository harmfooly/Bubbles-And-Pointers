#include <stdio.c>

void addOne(int);
void addonePtr(int *);

void main(){
	int a = 2;
	printf("before addOne: %d \n", a);
	addOne(a);
	printf("after addOne: %d \n", a);
	addOnePtr(a);
	printf("after addOnePtr: %d \n", a);
} // end main
  
void addOne(int var){
	var++;
	printf("Inside addOne: %d \n", var);
} // end addOne
 
void addOnePtr(int var){
	(*varPtr)++;
	printf("Inside addOnePtr: %d \n", *var);
} // end addOnePtr
