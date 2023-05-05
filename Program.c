If the lengths of three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is an isosceles, an equilateral, a scalene


#include<stdio.h>
#include<conio.h>
int main()
{
    int side1, side2, side3, angle;
    printf("\n Enter Three side of the triangle : ");
    scanf("%d %d %d", &side1,&side2,&side3);

    if (side1==side2 && side1==side3)
        printf("Equlateral Triangle\n");
    else if ((side1==side2 && side1!=side3) || (side1==side3 && side1!=side2) || (side2==side3 && side2!=side1))
        printf("Isosceles Triangle\n");
    else if (side1!=side2 && side1!=side3)
            printf("Scalene Triangle\n");
    return 0;
}
