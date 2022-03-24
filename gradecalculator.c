#include <stdio.h>

void main(){
    int M1,M2,M3,M4,M5;
    int sum=0;
    float avg;
    printf("Enter marks in java:  ");
    scanf("%d",&M1);
    printf("Marks in java: %d\n",M1);

    printf("Enter marks in CP: ");
    scanf("%d",&M2);
    printf("Marks in CP: %d\n",M2);

    printf("Enter marks in C++: ");
    scanf("%d",&M3);
    printf("Marks in C++: %d\n",M3);

    printf("Enter marks in C: ");
    scanf("%d",&M4);
    printf("Marks in C: %d\n",M4);

    printf("Enter marks in PYTHON: ");
    scanf("%d",&M5);
    printf("Marks in PYTHON: %d\n",M5);

    
    sum = M1+M2+M3+M4+M5;
    
    printf("The total sum is: %d\n",sum);

    
    avg = (M1+M2+M3+M4+M5)/5;
    
    printf("The Average is: %f\n",avg);
    if(avg<40){
        printf("Grade is F ");
    }else if(avg>=50 && avg<60){
        printf("Grade is D ");
    }
    else if(avg>=60 && avg<70){
        printf("Grade is C ");
    }else if(avg >= 70 && avg<80){
        printf("Grade is B ");
    }else if(avg >= 80 && avg<90){
        printf("Grade is A");
    }else{
        printf("Topper");
    }
}

