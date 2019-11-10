#include <stdio.h>
#include <stdlib.h>

int main() {
    float num_one, num_two;
    int repeat = 0;
    int running = 1;
    char operator = '+';

    while( running ) {
        while( !repeat ) {
            puts("Hello, Welcome to Calculator: ");
            printf("Please insert number one");
            repeat = scanf(" %f", &num_one);
            printf("Please insert number two: ");
            repeat = scanf(" %f", &num_two);
            printf("Please insert the operator to calculate the result: ");
            repeat = scanf(" %c", &operator);
        }

        //calculation process
        float result;
        switch (operator) {
            case '+' :
                result = num_one + num_two;
                //printf("Result %ld", num_one+num_two);
                break;
            case '-':
                result = num_one - num_two;
                break;
            case '*' :
                result = num_one * num_two;
                break;
            case '/' :
                result = num_one / num_two;
                break;
            default:
                puts("Something unexpected happend....");
        }

        printf("%.3f %c %.3f = %.3f \n", num_one, operator, num_two, result);
        repeat = 0;

        int stop;
        puts("Please press 99 to exit or sth. else to continue :) \n");
        scanf("%i", &stop);
        if(stop == 99) {
            exit(0);
        }
    }
    return 0;
}