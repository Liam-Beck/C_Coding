#include <stdio.h>

int main() {
    int num_one;
    int num_two;
    int repeat = 0;
    char operator = '+';

    while( !repeat ) {
        puts("Hello, Welcome to Calculator: ");
        printf("Please insert number one");
        repeat = scanf(" %ld", &num_one);
        printf("Please insert number two: ");
        repeat = scanf(" %ld", &num_two);
        printf("Please insert the operator to calculate the result: ");
        repeat = scanf(" %c", &operator);
    }
    //calculation process
    float result;
    switch (operator){
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
        default: puts("Something unexpected happend....");
    }

    printf("%ld %c %ld = %ld \n", num_one, operator, num_two, result);

    return 0;
}