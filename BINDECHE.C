#include<stdio.h>

#include<conio.h>

#include "bindeche.h"


void main()

{

   long int binary;

   int choice,check=0;

   printf("Enter the binary number: ");

   scanf("%ld", &binary);

   printf("\n0 = Binary to Decimal\n1 = Binary to Hexadecimal\n Enter your choice : ");

   scanf("%d", &choice);
   if(choice == 0){

	   bin_dec(binary);

   }

   else{

	   bin_hex(binary);

   }

   getch();

}