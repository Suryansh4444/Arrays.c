#include <stdio.h>

int main(){ 
   int a = 5;
   int *ptr = &a;

printf("The value of a is %u\n", &a);
printf("The value of a is %u\n", ptr);
ptr++;
printf("The value of ptr is %u\n", ptr);



    return 0;
}