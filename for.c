//  FOR LOOP IN C PROGRAMMING

# include<stdio.h>
int main(){
	/* Syntax of the for loop
	 
	 for( initialization expression;test expression;update expression){
		 
		 code inside the for loop
		 }
	 
	*/
	
	// a program to add numbers from 0 to 100
	
	/*int total=0;
	for (int num=1; num<=100;num++){
		total= total+num;
		//printf("Sum=%d\n",total);
	}
	printf("Sum=%d\n",total);
	*/
	
	// the sum of even numbers
	/*int total=0;
	for (int num=0; num<=100;num=num+2){
		total= total+num;
		//printf("Sum=%d\n",total);
	}
	printf("Sum=%d\n",total);
	*/
		// the sum of odd numbers
	int total=0;
	for (int num=1; num<=100;num=num+2){
		total= total+num;
		//printf("Sum=%d\n",total);
	}
	printf("Sum=%d\n",total);
	
	
	return 0;
}