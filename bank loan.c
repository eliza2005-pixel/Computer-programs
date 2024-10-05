/*
Author:Eliza Mulee
Reg:CT102/G/22239/24
*/
#include <stdio.h>
int main () {
int age;
float income;

printf("Enter age in years:");
scanf("%d", &age);

printf("Enter annual income in sh:");
scanf("%f", &income);

if (age >= 21 && income >= 21000) {
printf("congratulationsyouhave qualified for ourloan");
} else {
printf("unfortunately we are unable to offer you a loan this time");
}
return 0;
}