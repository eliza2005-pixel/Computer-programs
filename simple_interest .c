/*
Author:Eliza Mulee 
Reg no:CT102/G/22239/24
*/
# include <stdio.h>

int main() {
float principal,rate,simpleinterest;
int time;
printf("Enter the principal amount:");
scanf("%f", &principal);

printf("Enter the rate of interest:");
scanf("%f", &rate);

printf("Enter time:");
scanf("%d", &time);

simpleinterest = (principal*rate*time)/100;

printf("simple_interest = %.1f\n,simpleinterest");
   return 0;
}