#include <stdio.h>

void rectangle()
{
    double area;
    double w, h;
    printf("Enter width : ");
    scanf("%d", &w);
    printf("Enter height : ");
    scanf("%d", &h);
    area = w * h;
    printf("Area is : %.2f", area);
}

double rectangleInputMode(double w, double h)
{
    double area;
    area = w * h;
    return area;
}

int main()
{
    // rectangle();
    double w, h;
    printf("Enter width : ");
    scanf("%lf", &w);
    printf("Enter height : ");
    scanf("%lf", &h);
    printf("Area return of funcion is : %.2f", rectangleInputMode(w, h));
}
