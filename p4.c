#include <stdio.h>

int main(void)
{
    int km,mtr;
    float feet,inch,cm;

    printf("Enter the distance in kilometer = ");
    scanf("%d",&km);

    mtr=km*1000;
    feet=km*3280.84;
    inch=km*39370.1;
    cm=km*100000;

    printf("\nmeter = %d",mtr);
    printf("\nFeet = %f",feet);
    printf("\nInch = %f",inch);
    printf("\ncentemeter = %f",cm);
    return 0;
}