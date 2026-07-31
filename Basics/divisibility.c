// wap o check whether a number is divisible by  or not.

#include <stdio.h>

int main(void){

    int n;

    printf("Enter the number: \n");
    scanf("%d", &n);

// for a num tobe divisibleby 2 while divide by 2 we get remainder as zero elso not divisible

    if (n % 2 == 0){
        printf("%d is divisible by 2. \n", n);
    }
    else {
        printf("%d is not divisible by 2. \n", n);
    }



}