#include <stdio.h>

int main()
{	
	// a string is an array of char in C.
	char c[] = "c string";
	
	// string output
	printf("This is a C string: %s \n", c);

	// how to initialize strings in C:
	char st1[] = "abcd";
	char st2[50] = "abcd";
	
	//In C pragramming, a string is a sequence of characters
	//terminated with a null character \0.
	char st3[] = {'a', 'b', 'c', 'd', '\0'};
	char st4[5] = {'a', 'b', 'c', 'd', '\0'};

	// getting strings from the user.
	char name[30];
	printf("Please, tell me your name: ");
	scanf("%s", name);
	printf("Your name is %s \n", name);
}
