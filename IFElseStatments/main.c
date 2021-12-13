#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    char name[] = {"Jorge Minjares"};
    int grade;
    printf("Enter student grade: ");
    scanf("%i", &grade);

    if(grade >= 70){
        printf("%s has passed with a %i\n", name, grade);
    }
    else{
        printf("%s has failed with a %i\n", name, grade);
    }
    return 0;
}