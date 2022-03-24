// #include <stdio.h>
// // void main(){
// //     printf("YAKSHIT");
// // }
// #include <stdio.h>
// void main(){
//     int q1,q2,r;
//     float F;
    
    
//     printf("The vale of charge one is: ");
//     scanf("%d",&q1);
//     printf("The value of charge two is: ");
//     scanf("%d",&q2);
//     printf("The value of r is: ");
//     scanf("%d",&r);
//     F = 8.98*(q1*q2)/(r*r);
//     printf("The value of force is:%f",F);
// }
// #include <stdio.h>
// void main(){
//     int temp =0;
//     int num1 = 53;
//     int num2 = 65;
//     int num3 = 72;
//     printf("num1 is %d num2 is %d num3 is %d\n", num1,num2,num3);
//     temp = num3;
//     num3 = num2;
//     num2 = num1;
//     num1 =temp;
//     printf("Final numbers are %d,%d,%d",num1,num2,num3);
// }
#include <stdio.h>
void main(){
int P;
float F,A;
int q1,q2,r1,r;

printf("The value of q1 is\n and q2 is \n and r is \n");
scanf("%d,%d,%d\n",&q1,&q2,&r);
F = 8*(q1*q2)/ r*r;

printf("The value of r1 is\n");
scanf("%d",&r1);
A= 3.14*(r1*r1);

P= F/A;
printf("The value of Pressure is: %d",P);
}