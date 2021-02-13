#include <stdio.h>
#include <math.h>

int main()
{
    int P;
    float C, F, K, T;

    printf("<<<<   Temparature Conversion options   >>>>\n");
    printf("       1- Celsius to Kelvin       \n");
    printf("       2- Kelvin to Celsius       \n");
    printf("       3- Kelvin to Fahrenheit       \n");
    printf("       4- Fahrenheit to Kelvin       \n");
    printf("       5- Fahrenheit to Celsius       \n");
    printf("       6- Celsius to Fahrenheit       \n");
    printf("Please enter the option: ");
    scanf("%d", &P);


    switch(P)
    {
        case 1:
        printf("Enter Temparature in Celsius: ");
        scanf("%f", &C);
        if(C>=-273.15)
        {
        T= (C+ 273.15);
        printf("Temperature in Kelvin is: %f K\n", T);
        }
        else
        printf("Not defined");
        break;

        case 2:
        printf("Enter the Temperature in Kelvin: ");
        scanf("%f", &K);
        if(K>=0)
        {
            T=(K-273.15);
            printf("Temperature in Celsius is: %f C\n", T);
        }
        else
        printf("Not defined");
        break;

        case 3:
        printf("Enter the temperature in Kelvin: ");
        scanf("%f", &K);
        if(K>=0)
        {
            T=(K*(9/5)-459.67);
            printf("Temperature in Fahrenheit is: %f F\n", T);
        }
        else
        printf("Not defined");
        break;

        case 4:
        printf("Enter the Temperature in Fahrenheit: ");
        scanf("%f", &F);
        if(F>=-459.67)
        {
            T=273.15+ ((F-32)*(9/5));
            printf("Temperature in Kelvin is: %f K\n", T);
        }
        else
        printf("Not defined");
        break;

        case 5:
        printf("Enter the Temperature in Fahrenheit: ");
        scanf("%f", &F);
        if(F>=-459.67)
        {
            T= ((F-32)*(5/9));
            printf("Temperature in Celsius: %f C\n", T);
        }
        else
        printf("Not defined");
        break;

        case 6:
        printf("Enter the Temperature Celsius: ");
        scanf("%f", &C);
        if(C>=-273.15)
        {
            T= ((9/5)*C+32);
            printf("Temperature in Fahrenheit: %f F\n", T);
        }
        else
        printf("Not defined");
        break;       
        
    }

    return 0;
}