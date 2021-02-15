#include <calculator_operations.h>
void calculator()
{
    printf("1.add\n2.substarct\n3.multiply\n4.division\n");
    int choose,num1,num2;
    scanf("%d",&choose);
    printf("Enter 2 numbers\n");
    scanf("%d%d",num1,num2);


    switch (choose)
    {
    case 1:
        add(num1,num2);
        break;
    case 2:
        subtract(num1,num2);
        break;
    case 3:
        multiply(num1,num2);
        break;
    case 4:
        divide(num1,num2);
        break;
    default:
        break;
    }
}


int add(int operand1, int operand2)
{
    printf("%d",operand1+operand2);
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    printf("%d",operand1-operand2);
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    printf("%d",operand1*operand2);
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else{
        printf("%d",operand1/operand2);
        return operand1 / operand2;
    }
}
