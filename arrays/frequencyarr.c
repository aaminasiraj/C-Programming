# include <stdio.h>

int main(void){

    float arr[20], n;
    int i,  j;

    for( i = 0; i < 10; i ++){
        printf("Enter NUmber:");
        scanf("%f", &arr[i]);
    }

    printf("Enter number you want the frequncy of: ");
    scanf("%f", &n);

    int count = 0;
    for (j = 0; j < 10; j ++){
        if (arr[j] == n){
            count ++;
        }
    }
    printf("The frequency of the no. %f is %d. \n", n, count);

}