#include "conversion.h"
#include <conio.h>
#include <stdio.h>
int main(){

	float C,F,m,f,l,cf;
	int ch,i=1;
	while(1){
		printf("\n\nEnter your choice:\n1.C to F\n2.F to C\n3.Meter to Feet\n4.Feet to Meter\n5.Litre to Cubic Feet\n6.Cubic Feet to Litre\n7.Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter Celsius Value:\t");
				scanf("%f",&C);
				printf("Fahrenheit Value: %f",C_to_F(C));
				break;
			case 2:
				printf("Enter Fahrenheit Value:\t");
				scanf("%f",&F);
				printf("Celsius Value: %f",F_to_C(F));
				break;
			case 3:
				printf("Enter Meter Value:\t");
				scanf("%f",&m);
				printf("Feet Value: %f",m_to_f(m));
				break;
			case 4:
				printf("Enter Feet Value:\t");
				scanf("%f",&f);
				printf("Meter Value: %f",f_to_m(f));
				break;
			case 5:
				printf("Enter Litre Value:\t");
				scanf("%f",&l);
				printf("Cubic Feet Value: %f",l_to_cubicFt(l));
				break;
			case 6:
				printf("Enter Cubic Feet Value:\t");
				scanf("%f",&cf);
				printf("Litre Value: %f",cubicFt_to_l(cf));
				break;
			case 7: exit(0);
			break;
		}
	}
	
	return 0;
}

