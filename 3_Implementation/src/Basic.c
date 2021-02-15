

#include "Basic.h"

void calculator()
{
 int choice;
 float n1,n2;
 printf("Enter Choice\n1.Add\n2.Sub\n3.Mul\n.4.Div\n5.Modulus\n") ;
 scanf("%d",&choice);
 switch(choice)
 {
     case 1:
     printf("enter numbers\n");
     scanf("%f%f",&n1,&n2);
     sum(n1,n2);
     break;
     case 2:
          printf("enter numbers\n");
     scanf("%f%f",&n1,&n2);
     sub(n1,n2);
     break;
     case 3:
          printf("enter numbers\n");
     scanf("%f%f",&n1,&n2);
     mul(n1,n2);
     break;
     case 4:
          printf("enter numbers\n");
     scanf("%f%f",&n1,&n2);
     //div(n1,n2);
     break;
     case 5:
     printf("enter the number\n");
     scanf("%d%d",&n1,&n2);
     break;

     }

}
float sum(float num1,float num2)
{
    printf("the sum is %f",num1+num2);
    return num1+num2;
}

float sub(float num1,float num2)
{
    printf("the diff4
     is %f",num1-num2);
    return num1-num2;
}

float mul(float num1,float num2)
{
    printf("the sum is %f",num1*num2);
    return (num1*num2);
}

/*float div(float num1,float num2)
{
    printf("the division is %f",num1/num2);
    return (num1/num2);
}*/
/*int mod(int num1,int num2)
{
    printf("the sum is %d",num1%num2);
    return (num1%num2);
}
*/
