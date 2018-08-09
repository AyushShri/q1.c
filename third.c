#include <stdio.h>
 int main()
{
int qty;
float rate, tot, dis;
printf ("Enter Quantity and rate");
scanf ("%d %f" , &qty, &rate );
if (qty> 100 && qty < 200)
dis = 1;
if (qty> 200 && qty < 300)
dis = 0.75;
if (qty> 300 && qty < 400)
dis = 1.5;	
if (qty> 400 && qty <= 600)	
dis = 2.5;
if (qty> 600 && qty < 800)	
dis = 3;
if (qty> 800 && qty <= 999)
dis = 4.5;	
tot = (qty * rate)- (qty * rate * dis/100);
printf ("Total Expenses = Rs. %f\n", tot );
return 0;
}
