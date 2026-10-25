#include<stdio.h>
struct hotel
{
    int grade,no_of_rooms,price;
    char hname[10],address[20];
}h;
void hotel_information_get()
{
    printf("Enter name,address,grade,no of rooms,price = ");
    scanf("%s %s %d %d %d",h.hname,h.address,&h.grade,&h.no_of_rooms,&h.price);
}
void hotel_information_display()
{
    printf("\n\n----Hotel Information----\n\n");
    printf("\nHotel name %s",h.hname);
    printf("\nHotel Address %s",h.address);
    printf("\nHotel grade %d",&h.grade);
    printf("\nHotel total rooms %d",&h.no_of_rooms);
    printf("\nHotel price %d",&h.price);
}
void main()
{
    hotel_information_get();
    hotel_information_display();
}
