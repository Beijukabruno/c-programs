////  WHILE LOOP IN C PROGRAMMING

# include <stdio.h>
int main (){
	/* Syntax
	while (){
		
		statements;
		}
	*/
	
// A program to produce a multiplication table

	/*int count=1;
	int number;
	printf("Enter number ;");
	scanf("%d",&number);
	
	while (count<=10){
		printf("%d * %d =%d\n",count,number,count*number);
		//count++;
		++count;
	}
	*/
	
//// DO WHILE LOOP

// when using the do while loop, the body of the program is executed then the test condition is verified


/* syntax for the do while loop
do{
	
	body of the loop
	
} while ( test condition);

*/	
	int count=10;
	int number=9;
	//printf("Enter number ;");
	//scanf("%d",&number);
	
	while (count<=10 && count>0){
		printf("%d * %d =%d\n",count,number,count*number);
		//count++;
		--count;
	
	
	}
	
	
	
	
return 0;
}