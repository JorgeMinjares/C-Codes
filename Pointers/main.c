#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    int *p, x = 10, y = 6;
    printf("Before manipulation:\n");
    printf("X = %i\n", x);
    printf("Y= %i\n", y);
    printf("p = %i\n", *p);

    p = &x;
    y = *p;
    printf("After manipulation:\n");
    printf("X = %i\n", x);
    printf("Y= %i\n", y);
    printf("p = %i\n", *p);


    
    return 0;
}