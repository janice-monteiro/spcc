#include <stdio.h>
#include <conio.h>
#include "area.h"

int main()
{
    int choice;
	float n1,n2;
    
    printf("Menu \n1)Square \n2)Rectangle \n3)Triangle \n4)Circle \n5)Exit	  ");
    
	 while(1){
	 printf("\nEnter your choice : ");
	 scanf("%d",&choice);
    switch (choice)
    {
    case 1:
	printf("\nEnter Value of side:");
	scanf("%f",&n1);
	printf("Area of square is %1f",sqArea(n1));
	break;

    case 2:
	printf("\nEnter Value of length:");
	scanf("%f",&n1);
	printf("\nEnter Value of breath:");
	scanf("%f",&n2);
	printf("Area of Rectangle is %1f",rectArea(n1,n2));
	break;

    case 3:
	printf("\nEnter Value of height:");
	scanf("%f",&n1);
	printf("\nEnter Value of base:");
	scanf("%f",&n2);
	printf("Area of Triangle is %1f",triArea(n1,n2));
	break;

    case 4:
	printf("\nEnter Value of radius:");
	scanf("%f",&n1);
	printf("Area of Circle is %1f",circleArea(n1));
	break;
	
	case 5:   
            exit(0);

    }
	}
	
}

