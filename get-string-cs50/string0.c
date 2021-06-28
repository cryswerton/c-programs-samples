//gcc -o string0 string0.c -lcs50
//export LDLIBS=-lcs50

#include <stdio.h>
#include <cs50.h>

int main(void){

    string s = get_string("Input: ");
    
    printf("Hello, %s\n", s);

}
