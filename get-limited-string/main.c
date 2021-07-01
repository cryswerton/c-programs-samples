#include <stdio.h>
#include <string.h>

int main()
{		
	// getting limited characters from the user.
	int size = 30;
	char name[size];
	printf("Please, tell me your name: ");
	// The last position must be reserved to the null character(\0).
	scanf("%29s", name);
	printf("Your name is %s \n", name);

	int characters_name = getStringSize(name, size);
	printf("Length of string: %i\n", characters_name);
}


