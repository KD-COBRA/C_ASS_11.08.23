#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit");
    scanf("%d",&n);
    double sum=0.00;
    for(double i=1;i<=n;i++){
        sum=sum+1/i;
    }
    printf("%f",sum);
    return 0;
}