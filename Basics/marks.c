// wap a program to give students marks
// mark< 30 is c
// marks bw 30 and 70 is b
// marks bw 70 and 90 is a
// marks bw 90 and 100 is c

# include <stdio.h>

int main(void){

    int marks;

    printf("Enter your Marks: \n");
    scanf("%d", &marks);

    
    if( 0 <= marks && marks < 30){
        printf("Your grade is C. \n");
    }
    else if ( 30 <= marks && marks < 70){
        printf("Your grade is B. \n");
    }
    else if ( 70 <= marks && marks < 90){
        printf("Your grade is A. \n");
    }
    else if ( 90 <= marks && marks<= 100){
        printf("Your grade is A+. \n");
    }
    else{
        printf("The marks entered are invalid. \n");
    }
    

}