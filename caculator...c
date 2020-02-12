

#include <stdio.h>
#include<math.h>

int main()
{
    char op;
    float num1, num2, result=0.0f,square=0.0f,root=0.0f,cube=0.0f;
    double modulus=0;


    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * / ] [number 2]\n");

    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
    case '+':
        result = num1 + num2;
        modulus=fmod (num1,num2);
        square= result*result;
        cube=result*result*result;
        root= sqrt(result);

        break;

    case '-':
        result = num1 - num2;
        modulus=fmod(num1,num2);
        square= result*result;
        cube=result*result*result;
        root= sqrt(result);
        break;

    case '*':
        result = num1 * num2;
        modulus=fmod(num1,num2);
        square= result*result;
        cube=result*result*result;
        root= sqrt(result);
        break;

    case '/':
        result = num1 / num2;
        modulus=fmod(num1,num2);
        square= result*result;
        cube=result*result*result;
        root= sqrt(result);
        break;



    default:
        printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);
    printf(" modulus %.1lf\n",modulus);
    printf(" square %.2f\n",square);
    printf(" cube %.2f\n",cube);
    printf(" root %.2f",root);





    return 0;
}
