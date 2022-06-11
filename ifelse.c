
//// IF ELSE STATEMENTS IN C
# include <stdio.h>
# include <stdbool.h>
int main(){
	
	/* syntax of if else 
	
	if ( test condition){
		 body of if statement
	}
		else{ 
		body of the alternative statementto be executed
	}
	*/
	/*int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if (age>=18){
		printf("You are elegible to vote.");
		
	}
	else{
		 printf("You are under_age");
	}
	*/
		/* syntax of the else if
	
	if ( test condition){ 
		 body of if statement
	}
	else if ( test condition2 ){ 
		
		body of statement to be executed
	}
	else{
		statement
	}
	
	*/
	// Program testing number inputs of user
	
	double number;
	printf("Enter you number to be tested:");
	scanf("%lf",&number);
	
	if (number ==0){
		printf("The number is 0.\n");
	}
	else if (number<0){
		printf("The number is negative\n");
	}
	else if (number>0){
		printf("The number is positive \n");
	}
	else {
		printf("ERROR!!!!!");
	}
	
	
	return 0;
	
}
