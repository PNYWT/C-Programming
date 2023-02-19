#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
   	int w1,w2,h;
   	float area;
   	printf("Calculate trapezoid area\n");
   	printf("Width1 : ");
   	scanf("%d",&w1);
   	printf("Width2 : ");
   	scanf("%d",&w2);
   	printf("Height : ");
   	scanf("%d",&h);
   	area = 0.5*(w1+w2)*h;
   	printf("Area of trapezoid is %.2f\n", area);
}

/*
Calculate trapezoid area
Width1 : 3
Width2 : 5
Height : 3
Area of trapezoid is 12.00
*/