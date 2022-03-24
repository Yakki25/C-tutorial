#include<stdio.h>
void main(){
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if(ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("It's a lowercase vowel");
    }else if (ch =='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Its uppercase vowel");
    }
    
    else{
        printf("Not a vowel");
    }
}