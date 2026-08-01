# include <stdio.h>

int main(void){
    
    int base,power,i,sum = 1;

    printf("Whats the base and power of the number: \n ");
    scanf("%d %d", &base, &power);

    for (i = 1; i <= power; i++){
        sum = sum * base;
    }
     printf("the base %d to the the power of %d is %d. \n", base, power, sum );
}