#include <trignometry.h>
float main(){
    float tempt, degree;
    printf("Enter the number \(In degree\)\n");
    scanf("%f",&degree);
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
  }
 float sin_angle(float degree)
{
    float c=0;
    c=sin(degree);
    return c;
}
float cos_angle(float degree)
{
    float c=0;
    c=cos(degree);
    return c;
}
float tan_angle(float degree)
{
    float c=0;
    c=tan(degree);
    return c;
}    
float cosec_angle(float degree)
{
    float c=0;
    c=1/sin(degree);
    return c;
}
float sec_angle(float degree)
{
    float c=0;
    c=1/cos(degree);
    return c;
}
float cot_angle(float degree)
{
    float c=0;
    c=1/tan(degree);
    return c;
}