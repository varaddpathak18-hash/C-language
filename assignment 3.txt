#include <stdio.h>

int main() {
    int num1, num2;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n+. Addition\n");
    printf("-. Subtraction\n");
    printf("*. Multiplication\n");
    printf("/. Division\n");
    printf("%%. Modulus\n");
    printf("Enter your choice (+, -, *, /, %%): ");
    
    scanf(" %c", &choice);

    switch(choice) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
            
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
            
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
            
        case '/':
            if(num2 == 0)
                printf("Error: Division by zero\n");
            else
                printf("Result = %.2f\n", (float)num1 / num2);
            break;
            
        case '%':
            if(num2 == 0)
                printf("Error: Modulus by zero\n");
            else
                printf("Result = %d\n", num1 % num2);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
