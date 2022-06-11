// Boolean and comparison Operators

# include <stdio.h>

# include <stdbool.h>

int main(){
	int num1=7;
	int num2=39;
	/*bool value= num1!=num2;
	bool value1= num1>=num2;
	bool value2= num2<num1;
	bool value3= num1==num2;
		printf("%d",value);
		printf("\n%d",value1);
		printf("\n%d",value2);
		printf("\n%d",value3);*/
		
		///		AND : &&
		////	OR  : ||
		////    NOT :  !
		
	bool value= num1!=num2 && num2<num1  ;
	bool value1= num1>=num2 || num2<num1;
	bool value2=  !value;
	//bool value3= num1==num2;
		printf("%d",value);
		printf("\n%d",value1);
		printf("\n%d",value2);
		//printf("\n%d",value3);	
	
	
	
	
	
	
	
	return 0;
}