#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    int num = 0;
    printf("Before loop: %i\n",num);
    //For-loop with single increaments for num to reach 100
    for(int i = 0; i < 100; i++){
        num ++; 
    }
    printf("After Loop: %i\n", num);

    return 0;
}