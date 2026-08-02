#include <stdio.h>

int main(void)
{
    int n, i, sum = 0,count = 0, countodd = 0;

    while(1){
        printf("Enter Number: ");
        scanf("%d", &n);
        if(n % 2 != 0){
            countodd = countodd + 1;
            printf("%d is odd hence skipping it. \n", n);
            continue;
        }
        count = count + 1;
        sum = sum + n;
        printf("The sum of entered even numbers till now: %d \n", sum );
        if (n == 0){
            printf("Ending summation since you enetered 0.\n");
            printf("The final summation: %d \n", sum);
            printf("the number of even numbers entered are %d. \n", count);
            printf("the number of odd numbers entered are %d. \n", countodd);
            break;
        }
        
        

    }
    

} 