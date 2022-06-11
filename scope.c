# include<stdio.h>

// C Variable Scope
// There are the local variable scope and the global variable scope

//the global are declared outside while the local are found within the body of code

//  RECURSION
/*
void recurse(){
	.........
	recurse();
	......
	int main(){
		....          //// to prevent the infinite recursion of the function we use an if else loop
		
		recurse();
		.....
		return 0;
	}
}

*/


/// program is going to add a number with all positive integers before it.
/// say number is 5, sum= 5+4+3+2+1+0 =15
// check github repository


int sum(int n);


int main(){
	int number,result;
	printf("Enter a positive number.");
	scanf("%d",&number);
	
	result= sum(number);
	printf("sum = %d",result);
	

	return 0;
}
int sum(int n){
	if (n !=0){
		// sum() function calls itself
		return n+sum(n-1);
	}
	
}