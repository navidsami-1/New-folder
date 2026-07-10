# include<stdio.h>
int main (){
float amount,discountRate,discount,finalBill;
printf("Enter total purchse amount :");
scanf("%f",&amount);
printf("Enter discount percentage :");
scanf("%f",&discountRate);
discount = (amount +discountRate)/100;
finalBill   =amount - discount;
printf("Final Bill after discount :%.2f\n", finalBill);
return 0;
}