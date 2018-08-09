#include <stdio.h>
int main()
{
	float bp,da, hra, grossp;
	printf("Enter basic pay of Employee \n");
	scanf("%f" , &bp);
	da=0.4*bp;
	hra=0.2*bp;
	grossp=bp+da+hra;
	printf("Please Wait While Processing...\n");
	printf(".\n");
	printf(".\n");
	printf(".\n");
	printf("#######################\n");
	printf("*As per the Basic Pay Entered\n");
	printf("*Dearness allowances are: %f\n", da );
	printf("*House Rent allowances are: %f\n",hra );
	printf("*Total Gross Salary is %f\n", grossp);

}