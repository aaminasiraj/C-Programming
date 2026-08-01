# include <stdio.h>

int main(void){
    int sum =0 , i, n, j;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (i=0; i<=n ; i ++){
        sum = sum + i;
    }
    printf("%d \n", sum);

    for (j = n; j >= 1  ; j -- ){
        printf("%d \n", j);
    }
}