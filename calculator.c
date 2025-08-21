#include <stdio.h>
#include <math.h>

int main() {
    printf("---------------Simple Calculator---------------\n");
    char ch; int a, b;
    printf("Choose Operation (+,-,*,/)");
    scanf("%c", &ch);

    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        printf("Enter the first number");
        scanf("%d", &a);
        
        printf("Enter the second number");
        scanf("%d", &b);

        switch(ch) {
            case '+': printf("Sum of both the numbers is: %d\n", a + b);
                      break;
            case '-': printf("Subtraction of both the numbers is: %d - %d = %d\n", a, b, a - b);
                      break;
            case '*': printf("Product of both the numbers is: %d\n", a * b);
                      break;
            case '/': if(b != 0) {
                      printf("Quotient of %d/%d = %d\n", a, b, a / b);
            } else {
                printf("Not defined!\n");
            }
                      break;
        }
    } else {
        printf("Not a valid operation!\n");
    }
    printf("-------------------Thank You-------------------\n");
    return 0;
}