#include<stdio.h>
double pie=3.14;
double Area=0.00;
double Area_Circle(double r){
    Area=pie*r*r;
    return Area;
}
double Area_Triangle(double b,double h){
    Area=(1.00/2.00)*b*h;
    return Area;
}
double Area_Rectangle(double length,double breadth){
    Area=length*breadth;
    return Area;
}
int main(){
    int choice;
    double res,r,b,h,length,breadth;
    printf("Enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the radius of the circle");
        scanf("%lf",&r);
        res=Area_Circle(r);
        printf("\nThe Area of the Circle is:%lf",res);
        break;
    case 2:
        printf("Enter the base of triangle");
        scanf("%lf",&b);
        printf("Enter the heigth of triangle");
        scanf("%lf",&h);
        res=Area_Triangle(b,h);
        printf("\nThe Area of the Triangle is:%lf",res);
        break;
    case 3:
        printf("Enter the length of rectangle");
        scanf("%lf",&length);
        printf("Enter the breadth of rectangle");
        scanf("%lf",&breadth);
        res=Area_Rectangle(length,breadth);
        printf("\nThe Area of the Rectangle is:%lf",res);
        break;
    
    default:
        printf("\nWrong Choice");
        break;
    }
    return 0;
}