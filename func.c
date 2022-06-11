# include<stdio.h>

// FUNCTIONS IN C

void greet (){
	int num1,num2;
	printf ("Hello world");
	printf("\nEnter two numbers");
	scanf("%d,%d",&num1,&num2);
	int result=num1*num2;
	printf("%d * %d=%d",num1,num2,result);
	
	
}
int main(){
	// returnType functionName(){...code to be performed..}
	
	greet();
	

	return 0;
}