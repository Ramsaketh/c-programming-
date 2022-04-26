#include <stdio.h>

int main()
{
     int x;
     printf("Enter the number");
     scanf("%d",&x);
    switch (x) {
    case 1:
        printf("Pizza\nRs-239");
        break;
    case 2:
        printf("Burger\nRs-129");
        break;
    case 3:
        printf("Pasta\nRs-179");
        break;
    case 4:
        printf("French Fries\nRs-99");
        break;
    case 5:
        printf("Sandwich\nRs-149");
        break;
    default:
        printf("No");
        break;
    }
}