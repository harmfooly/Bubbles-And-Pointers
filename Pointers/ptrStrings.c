#include <stdio.h>
#include <string.h>

int main(){
	// There is no strings in C
	// Strings are arrays of chars

	char fName[20] = "Andy";
	printf("Hi there %s! \n", fName);

	// the next two lines are equivalent
	printf("fName[3]: %c \n", fName[3]);
	printf("fName[3]: %c \n", *(fName + 3));

	// you can assign an entire string to a character pointer
	char * lName = "Harris";
	printf("Hi, %s %s! \n", fName, lName);

	// input expects a character POINTER type
	// but a char array is already this type
	// You need to specify the length
	char realName[20];
	printf("What's your name? ");
	scanf("%s", realName);
	printf("Hi, %s! \n", realName);

	// if you want to manipulate strings, you must use functions like strcpy
	strcpy(fName, "George");
	printf("%s \n", fName);

	// comparing strings doesn't work as expected
	char strA[10] = "Joe";
	char strB[10] = "Joe";

	if (strA == strB){
		printf("They are the same \n");
	} else {
		printf("They are different \n");
	} // end if
	  
	// strings are shoter than length by embedding null characters
	strcpy(realName, "Andy Harris");
	// next line does not print 20 characters
	printf("X%sX \n", realName);

} // end of main
