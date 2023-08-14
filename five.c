#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int c=10;
    int sum=0;
    int i=0;
    while(i<n){
        printf("%d ",c-1);
        sum=sum+(c-1);
        c=c*10;
        i++;
    }
    printf("\nThe Sum is:%d",sum);
    return 0;
}