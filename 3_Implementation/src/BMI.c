#include <BMI.h>
void Calc_BMI()
{
    float weight;
   float height;

   
   
    
  /// printf(" 1 for enter your height in cm");
  //  printf(" 2 for enter your height in m");
    
    
     //printf("Press 1 to enter heihgt in Meter and weight in kg \n press  2 for enter your height in CM and weight in kg \n press 3 for enter your weight in LBS and height in cm \n press 4 to enter your weight in lbs and height in meter ");
    //scanf("%c", &operator);
    
   
    
    
/*switch(operator)
{
    case '1':
    */ 
     printf("please enter your weight in kg:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in Meter:");
    printf("\n");
    scanf("%f",&height);
    
       BMI(weight,height);
      /* break;
       
       
       case '2':
       
         printf("please enter your weight in kg:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in cm:");
    printf("\n");
    scanf("%f",&height);
   
   
   int wig=weight*1000;
   
    
    BMI2(wig,height);
    break;
       
       case '3':
       
       
        printf("please enter your weight in lbs:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in cm:");
    printf("\n");
    scanf("%f",&height);
     BMI3(weight,height);
    break;
    
    case '4':
    
    
        printf("please enter your weight in lbs:");
    printf("\n");
    scanf("%d",&weight);
    printf("please enter your height  in meter:");
    printf("\n");
    scanf("%f",&height);
     BMI4(weight,height);
    break;
    
      default:
       printf("enter valid choic");
    
}*/

}

float BMI(float weight, float height) 
{
    float result;
    if(weight<=10)
    {
        printf("Please enter weight greater then 10kg ");
    }
    if( height<=0.8)
    {
        printf("please enter height greater then 9 Meter");
    }
    printf("\n");
        float x=height*height;
  //  printf("%.3f",x);
  //  printf("\n");
  //  printf("%d",weight);
 //   printf("\n");
       result= weight/x;
       
       
      printf("%.3f", result);
      printf("\n");
      
       if(result<18.5)
       {
           printf("Underweight");
       }
       else if(result>18.5&&result<24.9)
       {
           printf("Normal and healthy Weight");
       }
       else if(result>25.0 && result<29.9)
       {
           printf("Over weight");
       }
       else
       {
           printf("Obses");
       }
}


/*float BMI2(int wig, float height) {
    float result;
    if(wig<=10000)
    {
        printf("Please enter weight greater then 10kg ");
    }
    if( height<=80)
    {
        printf("please enter height greater then 85");
    }
    printf("\n");
        float x=height*height;
   // printf("%.3f",x);
  //  printf("\n");
  //  printf("%d",wig);
   // printf("\n");
       result= wig/(float)x*10;
       
       
      printf("%.1f",result);
      printf("\n");
      
       if(result<18.5)
       {
           printf("Underweight");
       }
       else if(result>18.5&&result<24.9)
       {
           printf("Normal and healthy Weight");
       }
       else if(result>25.0 && result<29.9)
       {
           printf("Over weight");
       }
       else
       {
           printf("Obses");
           
       }
}
       
       
       float BMI3(int weight, float height) {
    float result;
    if(weight<=24)
    {
        printf("Please enter weight greater then 24lbs ");
    }
    if( height<=80)
    {
        printf("please enter height greater then 85");
    }
    printf("\n");
        float x=height*height;
   // printf("%.3f",x);
   // printf("\n");
   // printf("%d",wig);
   // printf("\n");
       result=730* (weight/(float)x*10);
       
       
      printf("%.1f",result);
      printf("\n");
      
       if(result<18.5)
       {
           printf("Underweight");
       }
       else if(result>18.5&&result<24.9)
       {
           printf("Normal and healthy Weight");
       }
       else if(result>25.0 && result<29.9)
       {
           printf("Over weight");
       }
       else
       {
           printf("Obses");
       }
       }
       
       
     float BMI4(int weight, float height) {
    float result;
    if(weight<=24)
    {
        printf("Please enter weight greater then 24lbs ");
    }
    if( height<=0.8)
    {
        printf("please enter height greater then 9m");
    }
    printf("\n");
    int height1=height*100;
        float x=height1*height1;
   // printf("%.3f",x);
   // printf("\n");
   // printf("%d",wig);
   // printf("\n");
       result=730* (weight/(float)x*10);
       
       
      printf("%.1f",result);
      printf("\n");
      
       if(result<18.5)
       {
           printf("Underweight");
       }
       else if(result>18.5&&result<24.9)
       {
           printf("Normal and healthy Weight");
       }
       else if(result>25.0 && result<29.9)
       {
           printf("Over weight");
       }
       else
       {
           printf("Obses");
       }
    }*/
        
        

