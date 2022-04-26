#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<=100 &&marks>=85)
    {
        printf("Grade A");
    }
    else if(marks<=84 && marks>=70)
    {
        printf("Grade B");
    }
    else if(marks>=55 && marks<=69)
    {
        printf("Grade C");
    }
    else if(marks>=40 && marks<=54)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0 ;
}