#include<stdio.h>
#include<math.h>
void printf_menu();

int main (){
    int choice;
    double first, second, result;
    while(1){
        printf_menu();
    scanf("%d", &choice);
    if (choice == 7) {
        printf("Exiting the calculator. Goodbye!\n");
        break;
    }
    if (choice < 1 || choice > 7) {
        printf("Invalid choice. Please try again.\n");
        continue;
    }
    printf("Please enter the first number: ");
    scanf("%lf", &first);
    printf("Please enter the second number: ");
    scanf("%lf", &second);
    switch (choice) {
        case 1:
            result = first + second;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = first - second;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = first * second;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (second != 0) {
                result = first / second;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if ((int)second != 0) {
                result = (int)first % (int)second;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        case 6:
            result = pow(first, second);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice. Please try again.\n");

        }
    }
    
    
     
    return 0;

}

void printf_menu(){
    printf("\n Welcome to the simple calculator\n");
    printf("Choose the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");     
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}