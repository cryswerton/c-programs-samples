#include <stdio.h>
#include "cs50.h"

typedef struct
{
	string name;
	int age;
	int id;
}
person;

const int COUNT = 2;

int main(void)
{
	person people[COUNT];

	people[0].name = "Marie";
	people[0].age = 25;
	people[0].id = 1;

	people[1].name = "John";
	people[1].age = 40;
	people[1].id = 2;
	
	printf("### PEOPLE REGISTED %d ###\n\n", COUNT);

	for(int i = 0; i < COUNT; i++)
	{
		printf("ID: %d \n", people[i].id);
		printf("Name: %s \n", people[i].name);
		printf("Age: %d \n\n", people[i].age);
	}
}
