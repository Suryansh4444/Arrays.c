#include <stdio.h>

int main(){ 
    int marks[] = {12, 34, 53, 66};
    
    
    //  same as int* ptr = &marks[0];
    int* ptr = marks ; 

    for (int i = 0 ; i < 4; i++)
    {
    //    printf("The marks at index %d is %d", i , marks[i]); 
        printf("The marks at index %d is %d", i , *ptr); 
        ptr++;
    }

    
    return 0;
}