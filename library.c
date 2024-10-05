/*
Author:Eliza Mulee
Reg:CT102/G/22239/24
*/
#include <stdio.h>
int main() {
int bookID,dueDate,returnDate,daysoverdue;
double finerate,fineamount;
// taking inputs from the user

printf("Enter bookID:");
scanf("%d", &bookID);

printf("Enter DueDate:");
scanf("%d", &dueDate);

printf("Enter returnDate:");
scanf("%d", &returnDate);

// calculate daysoverdue 

daysoverdue = returnDate - dueDate;

// determine finerate and calculate fineamount 

if (daysoverdue > 0 && daysoverdue <=7) {
finerate = 20.0;
} else if (daysoverdue <=14) {
finerate = 50.0;
} else if (daysoverdue >=15) {
finerate =100.0;
} else {
daysoverdue = 0;
finerate = 0.0;
}
// display the result
printf("bookID: %d\n", bookID);
printf("dueDate: %d\n", dueDate);
;printf("returnDate: %d\n", returnDate);
printf("daysoverdue: %d\n", daysoverdue);
printf("finerate: %lf\n", finerate);
printf("Total fineamount: %lf\n", fineamount);

return 0;
}