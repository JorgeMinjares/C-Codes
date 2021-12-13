#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    char name[] = {"Jorge Minjares"}; //Create string
    int grade;//Creat Integer
    printf("Enter student grade: ");
    scanf("%i", &grade);//get integer value
    
    //If grade is greater than 70 print message and end code
    if(grade >= 70){
        printf("%s has passed with a %i\n", name, grade);
        return 0;
    }
    //print message if condition is not met
    printf("%s has failed with a %i\n", name, grade);
    
    return 0;
}