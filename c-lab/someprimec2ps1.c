# include <stdio.h>

int main(void){

    int  i, j ;

    for(i = 2; i <= 1000; i ++){
        int count = 0;
        for(j = 1; j <= i; j ++){
            
            if(i % j == 0){
                count = count + 1;
            }
            
        }
        if(count == 2){
            printf("%d ", i);
        }
    }

}