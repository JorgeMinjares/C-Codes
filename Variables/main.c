#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv){
    int num = 0; //bit size = 4
    double dou = 0.0; //byte size = 8
    float flo = 0.0; //byte size = 4
    bool boo = true; // byte size = 2

    printf("Int: %i\n",num); //print specifier = %i
    printf("Double: %f\n",dou); //print specifier = %f 
    printf("float: %f\n",flo); //print specifier = %f
    printf("Bool: %d\n",boo); //print specifier = %d True = 1 false = 0

    return 0;
}