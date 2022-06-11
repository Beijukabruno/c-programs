//// TERNARY OPERATORS
 // test_condition ? expression1: expression2;
 

/*# include <stdio.h>
int main(){
	// checking for odd or even numbers
	int number;
	printf("Enter you number to be tested:");
	scanf("%d",&number);
	(number%2==0)? printf("The number is Even"): printf("The number is Odd");
	
	
	return 0;
}
*/


//////// SWITCH STATEMENT
# include <stdio.h>
int main(){
	/* syntax of switch statements
	switch( variable or expression){
		case value1:
		     body for case one
			 break;
			 
		case value2:
		     body for case two
			 break;
			 
		case value3:
		     body for case three
			 break;
			 
		default;
		     body for default case
			 
	}
	
	
	
	*/
	/*int day_week;
	printf("Enter the number to represent the day:");
	scanf("%d",&day_week);
	
	
	switch( day_week){
		case 1:
		    printf("Sunday.");
			 break;
			 
		case 2:
		     printf("Monday.");
			 break;
			 
		case 3:
		    printf("Tuesday.");
			 break;
			 
		 case 4:
		     printf("Wednesday.");
			 break;
			 
		case 5:
		     printf("Thursday");
			 break;
			 
		case 6:
		     printf("Friday");
			 break;
			 
		case 7:
		     printf("Saturday");
			 
			 break;
			 
		default:
		     printf("Unknown day.");
	}
	*/
	///// SIMPLE CALCULATOR
	
char operand;
printf("Enter the operand.. ['+','-','*','/']:");
scanf("%c",&operand);
	
double num1,num2;
printf("Enter the numbers;");
scanf("%lf %lf",&num1,&num2);
	
	
	
	switch( operand){
		case '+':
			
		    printf("%.2lf + %.2lf =%.2lf",num1,num2,num1+num2);
			 break;
			 
		case '-':
		    printf("%.2lf - %.2lf =%.2lf",num1,num2,num1-num2);
			

			break;
			 
		case '/':
		    printf("%.2lf / %.2lf =%.2lf",num1,num2,num1/num2);
			break;
			 
		 case '*':
		    printf("%.2lf * %.2lf =%.2lf",num1,num2,num1*num2);
			 break;
			 

			 
		default:
		    printf("syntax ERROR.");
	}
	
	
	
	
	
	
	return 0;
}
