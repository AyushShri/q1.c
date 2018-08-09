#include <stdio.h>
#include <math.h>
int main()
{
	
	
	 float p,t,roi,si, mid;
	
	 printf ("Enter Principle and time \n");
	
	 scanf ("%f %f ", &p, &t );
	 
	 mid= p*t;

	 printf ("enter percentage of interest");

     scanf ("%f", &roi);

	
	  si=mid*roi/100;

	  printf("Total Simple interest=Rs. %f\n", si);

return 0;
}
