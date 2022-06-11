
#include <stdio.h>
int main(){
// first C program
   // printf("Hello world!\n");
    
    
// Variables in C programming
   // int age=33;
    //int marks=87;

    //printf("I am %d years old ",age); // %d is a format specifier
    //printf("\n You scored %d in your exams.",marks);
    
// Different data types in C programming
/*
int			(4 bytes)   || %d
double		(8 bytes)   || %lf
float		(4 bytes)	|| %f
char		(1 byte)    || %c

*/

/**	int num1=21;
	float num2=64.94f;
	double num3=59893.5587765244;
	double expo=45.6e7;
	char character='B';
	
	printf("int=%d",num1);
	printf("\n float=%.3f",num2);
	printf(" \n double=%.4lf",num3);
    printf(" \n double=%.2lf",expo);
	printf("  \n char=%c",character);
	
	
/// Size of() Operator under  gcc data_types.c

	printf("\nSize of int=%zu bytes",sizeof(num1));
	printf("\nSize of float=%zu bytes",sizeof(num2));
	printf("\nSize of  double=%zu bytes",sizeof(num3));
    printf("\nSize of double=%zu bytes",sizeof(expo));
	printf("\nSize of char=%zu byte",sizeof(character));
	**/
	
	
	//// using the scanf() to take user input
	
	/*int age;
	printf("How old are you?");
	scanf("%d",&age);  // & represents the memory address of stored data
	double decimals;
	printf("Enter a double:");
	scanf("%lf",&decimals);
	
	printf(" Decimals=%.4lf \n",decimals); 
	printf("Age=%d",age);
	*/
	/// for multiple user input
	int num;
	float alp;
	printf("Enter input");
	scanf("%d %f",&num,&alp);
	printf("integer=%d.",num);
	printf("\n Float=%f",alp);
	
	








return 0;
}
        