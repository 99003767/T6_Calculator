
#include <calculator_operations.h>
#include <trignometry.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int degree=0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE,TRIGNOMETRY, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Trignometry\n6. Exit");
    printf("\n\tEnter your choice\n");
   
     //__fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        //__fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
           // __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
            case TRIGNOMETRY:
           printf("Enter the number \(In degree\)%f\n",
            degree);
            int tempt=0;
             tempt = degree;
    
    
    if(degree<0)
    {
        printf("Enter valid input");
        return 0;
        
    }
    if(degree>360)
    {
        printf("Enter valid input");
        return 0;
    }
    if(degree == 90.00 || degree == 270.00)
    {
    degree = (degree * 3.14159265359 / 180);
    printf("sin\(%.2f\) = %1.2f\n",tempt,sin_angle(degree)) ;
    printf("cos\(%.2f\) = %1.2f\n",tempt, cos_angle(degree));
     printf("cosec\(%.2f\) = %1.2f\n",tempt, cosec_angle(degree));
    printf("cot\(%.2f\) = %1.2f\n",tempt, cot_angle(degree));
    printf("Tan and sec not defined");
    }
    if(degree == 0.00 || degree == 180.00 || degree == 360)
    {
    degree = (degree * 3.14159265359 / 180);
    printf("sin\(%.2f\) = %1.2f\n",tempt,sin_angle(degree)) ;
    printf("cos\(%.2f\) = %1.2f\n",tempt, cos_angle(degree));
    printf("tan\(%.2f\) = %1.2f\n",tempt, tan_angle(degree));
     printf("sec\(%.2f\) = %1.2f\n",tempt, sec_angle(degree));
    printf("Cot and cosec not defined");
    }
    
    else
    {
         degree = (degree * 3.14159265359 / 180);
        printf("sin\(%.2f\) = %1.2f\n",tempt,sin_angle(degree)) ;
    printf("cos\(%.2f\) = %1.2f\n",tempt, cos_angle(degree));
     printf("tan\(%.2f\) = %1.2f\n",tempt, tan_angle(degree));
     printf("cosec\(%.2f\) = %1.2f\n",tempt, cosec_angle(degree));
    printf("sec\(%.2f\) = %1.2f\n",tempt, sec_angle(degree));
    printf("cot\(%.2f\) = %1.2f\n",tempt, cot_angle(degree));
    }
            
            
             
            
            
            //__fpurge(stdin);
            getchar();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}