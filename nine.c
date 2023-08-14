// Write a program in C to calculate and print the electricity bill of a given
// customer. The customer ID, name, and unit consumed by the user should
// be captured from the keyboard to display the total amount to be paid to
// the customer.
// The charge are as follow :
// Unit Charge/unit
// upto 199 @1.20
// 200 and above but less than 400 @1.50
// 400 and above but less than 600 @1.80
// 600 and above @2.00
// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the
// minimum bill should be of Rs. 100/-

#include<stdio.h>
int main(){
    char name[20];
    int id;
    int unit;
    double amount=0.00;
    double surged_amount=0.00;
    double net_amount=0.00;
    printf("Enter the customer id:");
    scanf("%d",&id);
    printf("Enter the customer name:");
    scanf("%s",name);
    printf("Enter Unit consumed");
    scanf("%d",&unit);
    if(unit<=199){
        amount=unit*1.20;
        if(amount>400){
            surged_amount=(15.00/100.00)*amount;
            net_amount=amount+surged_amount;
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
            printf("\nSurged Amount:%lf",surged_amount);
            printf("\nNet Amount:%lf",net_amount);
        }
        else{
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
        }
    }
    else if(unit>=200 && unit<400){
        amount=unit*1.50;
        if(amount>400){
            surged_amount=(15.00/100.00)*amount;
            net_amount=amount+surged_amount;
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
            printf("\nSurged Amount:%lf",surged_amount);
            printf("\nNet Amount:%lf",net_amount);
        }
        else{    
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
        }
    }
        else if(unit>=400 && unit<600){
        amount=unit*1.80;
        if(amount>400){
            surged_amount=(15.00/100.00)*amount;
            net_amount=amount+surged_amount;
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
            printf("\nSurged Amount:%lf",surged_amount);
            printf("\nNet Amount:%lf",net_amount);
        }
        else{
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
        }
    }
    else{
        amount=unit*2.00;
        if(amount>400){
            surged_amount=(15.00/100.00)*amount;
            net_amount=amount+surged_amount;
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
            printf("\nSurged Amount:%lf",surged_amount);
            printf("\nNet Amount:%lf",net_amount);

        }
        else{
            printf("\nThe name of the customer:%s",name);
            printf("\nThe id of the customer:%d",id);
            printf("\nUnit Consumed:%d",unit);
            printf("\nAmount Charged:%lf",amount);
        }
    }
    return 0;
}