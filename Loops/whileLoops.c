#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    int num = 0;
    printf("Before while-loop: %i\n", num);
    //Run while loop if the integer num is less than 100
    while(num < 100)
        num++; //If condition is met increase num by increaments of one
    printf("After while-loop: %i\n", num); 
    return 0;
}