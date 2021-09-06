#include <stdio.h>
#include <math.h>

int main()
{
    double addition, subtracion, multiplication, division, num1, num2, answer;
    int choice1;

    printf("Enter the numbers to perform some of algebric operations +,-,*,/ (for only two numbers)\n");
    
    printf("Enter your choice from below:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5.Use all operations on numbers.\n");
    scanf("%d", &choice1);

    printf("Enter first number:\n");
    scanf("%lf", &num1);
    printf("Enter second number:\n");
    scanf("%lf", &num2);

    switch(choice1)
    {
        case 1: addition= num1+num2;
        printf("Addition:%lf\n", addition);
        break;

        case 2: subtracion= num1-num2;
        printf("Subtraction:%lf\n", subtracion);
        break;

        case 3: multiplication= num1*num2;
        printf("Multiplication:%lf\n", multiplication);
        break;

        case 4: division= num1/num2;
        printf("Division:%lf\n", division);
        break;

        case 5:
        addition= num1+num2;
        subtracion= num1-num2;
        multiplication= num1*num2;
        division= num1/num2;
        printf("Addition:%lf\n", addition);
        printf("Subtraction:%lf\n", subtracion);
        printf("Multiplication:%lf\n", multiplication);
        printf("Division:%lf\n", division);
        break;

        default: printf("You have entered something wrong.\nPlease try again.");
        break;
    }


    return 0;
}
