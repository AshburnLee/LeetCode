// copy the entire list to a new variable using 
// a struct
#include "stdio.h"
#define SIZE 1000

struct array_tag { int a[SIZE]; };
struct array_tag orange, banana, lemon;

// pass: a struct array_tag 
// return: a struct array_tag
// function: two fold each element in source
struct array_tag twoFold(struct array_tag source) {
    int j;
    for (j=0; j< SIZE; j++) source.a[j] *= 2;
    return source; 
}

// function declaration
void printStruct (struct array_tag);
int main(int argc, char const *argv[])
{
    int i;
    for (i=0; i<SIZE; i++) orange.a[i] = 1;
    printStruct(orange);

    // printStruct(twoFold(orange));
    struct array_tag tmp;
    tmp = twoFold(orange);
    printStruct(tmp);
    
    // asign the entire list to another struct array_tag
    banana = tmp;
    
    printStruct(banana);

    return 0;
}

// pass: a struct array_tag
// return: void
// function: print the whole array_tag
void printStruct (struct array_tag s) {
    printf("\n"); 
    int i;
    for (i=0; i< SIZE; i++) printf("%d ",s.a[i]);
    printf("\n");
}


