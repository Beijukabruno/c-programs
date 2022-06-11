////// EXPLICIT AND IMPLICIT CONVERSION

# include <stdio.h>
int main(){

	/* Data type heirachy
	
	1. long double
	2. double
	3. float
	4. long
	5. int
	6. short
	7. char
	This means that data is converted towards the type at the top.(promoted to the higher data type)
	 
	 Implicit data_type conversion is known as the automatic data_type conversion by a computer
	 Explicit conversion is the manual data type conversion done by the user 
	 
	*/
	
// implicit data type conversion

	double a=5.67;
	int b=9;
	double result1= a+b;
	printf("result1=%lf",result1);
	
// Explicit data type conversion
	double c =5.67;
	int  d =9;
	int result2= (int)c + d; // the addition of (int) infront of c specifies that its converted to an integer
	
	printf("\n result2=%d",result2);
	int result= '8'+12;
	printf("\n result=%d",result);
	






return 0;
}