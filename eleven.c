#include<stdio.h>
int main(){
    int month_number;
    char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("\nEnter your Month Number:");
    scanf("%d",&month_number);
    if(month_number>=1 && month_number<=12){
        printf("\nThe Month in word is:%s",month[month_number-1]);
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}