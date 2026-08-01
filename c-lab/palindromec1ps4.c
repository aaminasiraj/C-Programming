# include <stdio.h>

int main(void){
    
    int n, lastdigit ;
    printf("the no. you want the palindrome of:\n");
    scanf("%d", &n);

    int original = n, reversed = 0;

    while(n != 0){
        lastdigit = n % 10;
        reversed = reversed*10 + lastdigit;
        n = n / 10;
    }
    if (original == reversed){
        printf("Number is Palindrome. \n");
    }
    else{
        printf("Number is not Palindrome. \n");
    }

}