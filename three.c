#include<stdio.h>
int main(){
    int p;
    printf("Enter the number");
    scanf("%d",&p);
    int n;
    printf("Enter the limit");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d*%d=%d ",p,i,i*p);
        if(i!=n){
            printf(",");
        }
    }
    return 0;
}