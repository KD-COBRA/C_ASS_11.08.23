#include<stdio.h>
#include<math.h>
int main(){
    int x,n;
    printf("Enter the number x");
    scanf("%d",&x);
    printf("Enter the limit");
    scanf("%d",&n);
    int sum=0;
    int e=1;
    // printf("%d^%d-",x,e);
    for(int i=0;i<n;i++){
        // if(i==0){
        //     sum=sum-pow(x,e);
        //     printf("%d^%d-",x,e);
        // }
        if(i==1){
            sum=sum-pow(x,e);
            printf("%d^%d+",x,e);
        }
        else{
            sum=sum+pow(x,e);
            printf("%d^%d+",x,e);
        }
        e=e+2;
    }
    printf("\nThe Sum is:%d",sum);
    return 0;
}