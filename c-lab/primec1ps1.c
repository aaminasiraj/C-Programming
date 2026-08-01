# include <stdio.h>

int main(void){
    int n , i , count =0;

    printf("Whats the number: \n");
    scanf("%d", &n);

    if (n != 0){
        for (i=0; i <= n; i ++){
            if (n % i == 0){
                count = count + 1;
            }
        }
        if (count == 2){
            printf("The number is prime.\n");
        }
        else if (count > 2 ){
            printf("The number is not prime.\n");
        }
    }
    else{
        printf("O is neither prime nor composite.\n");
    }
}