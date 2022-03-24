
#include<stdio.h>
void main(){
    float C,F;
    printf("Enter temperature in farenheit");
    scanf("%f",&F);
    C= (F-32)*5/9;
    printf("The value of Celsius is: %f",C);
    if (C<=4)
    {
        printf("Chill");
    }
    else if (C>4 && C<=40)
    {
        printf("Warm");
    }
    else
    {
        printf("Hot");
    }
    

}

