/*
Author:Eliza Mulee 
Reg no:CT102/G/22239/24
*/
# include <stdio.h>

int main(){
float principal,rate,compoundinterest;
int time;
printf("Enter the principal amount:");
scanf("%f", &principal);

printf("Enter the rate of interest:");
scanf("%f", &rate);

printf("Enter time:");
scanf("%d", &time);

compoundinterest = (principal*(1+rate/100)*time);

printf("compoundinterest = %d \n",compoundinterest);
   return 0;
}