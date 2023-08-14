#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        printf("%d ",i*i);
        sum=sum+(i*i);
    }
    printf("\nThe Sum is:%d",sum);
    return 0;
}