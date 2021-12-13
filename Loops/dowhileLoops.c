#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    int num = 0;
    printf("Before do-while-loop: %i\n", num);
    //Do instruction before the condition is met
    do{
        num++;
    }while(num < 100);
    printf("After do-while-loop: %i\n", num);
    return 0;
}