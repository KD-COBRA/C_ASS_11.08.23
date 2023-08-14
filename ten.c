#include<stdio.h>
#include<string.h>
int main(){
   int no;
   char *firstno[]={"zero","ten","eleven","twelve","thirteen", "fourteen","fifteen","sixteen","seventeen", "eighteen","nineteen"};
   char *secondno[]={"twenty","thirty","forty","fifty","sixty", "seventy","eighty","ninty"};
   char *thirdno[]={"one","two","three","four","five","six","seven","eight","nine"};
   printf("enter a number:");
   scanf("%d",&no);
   if(no<0 || no>99)
      printf("enter number is not a two digit number");
   else if(no==0)
      printf("the enter no is:%s",firstno[no]);
   else if(no>=10 && no<=19)
      printf("the enter no is:%s",firstno[no-10+1]);
   else if(no>=20 && no<=90)
      if(no%10 == 0)
         printf("the enter no is:%s",secondno[no/10 - 2]);
   else
      printf("the enter no is:%s %s",secondno[no/10-2],thirdno[no%10-1]);
return 0;
}