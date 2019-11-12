#include <stdio.h>
#include <stdlib.h>

int main() {
    float num_one, num_two;
    int repeat1 = 0, repeat2 = 0, repeat3 = 0;
    int running = 1;
    char operator = '+';

    puts("Hello, Welcome to Calculator: ");

    while( running ) {
        while( (repeat1 + repeat2 + repeat3) < 3 ) {
            repeat1 = 0, repeat2 = 0, repeat3 = 0;
            printf("Please insert number one: ");
            repeat1 = scanf(" %f", &num_one);
            printf("Please insert number two: ");
            repeat2 = scanf(" %f", &num_two);
            printf("Please insert the operator to calculate the result: ");
            repeat3 = scanf(" %c", &operator);

        }

        //calculation process
        float result;
        switch (operator) {
            case '+' :
                result = num_one + num_two;
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
        repeat1 = 0, repeat2 = 0, repeat3 = 0;
    }
    return 0;
}