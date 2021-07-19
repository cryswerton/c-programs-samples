#include <stdio.h>
#include <stdlib.h>

int main(void){
// lives on the stack part of the memmory.	

	int a; // statically obtain an integer.

// lives on the heap part of the memory. 

	int* b = malloc(4); // dinamically obtain an integer.
	
// dinamically obtain an array.
	
	int x;
	int amountOfBytes;

	printf("How many integers do you want to store? ");

	scanf("%i", &x);
	amountOfBytes = x * sizeof(int);

	// sizeof function returns the size in bytes.
	int* heap_array = malloc(amountOfBytes);
	
	if(heap_array == NULL){ 
		printf("Error! Not enough memory.\n");
		return 1; 
	}else{
		printf("%d bytes allocated.\n", amountOfBytes);
		free(heap_array);
		printf("%d bytes freed.\n", amountOfBytes);
		return 0;
	}

}

