#include <stdio.h>

int main(){

    printf("2\n");

    for (int i=3; i<23; i++){
        int no_prime_number = 0;

        //determine if i is prime number
        //checking all smaller numbers c and testing for divisibility
        for(int c=1; c<i; c=c+2){

            if (i % c == 0){
                no_prime_number = 1;
                break;
            }
        }
        if(no_prime_number == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
