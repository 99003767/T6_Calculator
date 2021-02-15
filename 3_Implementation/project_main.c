#include"trignometry.h"
#include"Basic.h"
#include"Conversion.h"



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
enum operations{ BASIC=1,TRIGNOMETRY, CONVERT, BMI, EXIT };

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
    printf("\n1. Basic\n2. Trigonometry\n3. Convert\n4. BMI\n5. Exit");
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
        case BASIC:
            Basic();
            break;
        case TRIGNOMETRY:

              trig();
            
            
            //__fpurge(stdin);
            getchar();
            break;

        case CONVERT:
            conversion();
            getchar();
            break;

        case BMI:

        
        case EXIT:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((BASIC <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}