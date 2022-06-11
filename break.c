# include<stdio.h>
int main(){
	//int number;
	//printf("Enter your number;");
	//scanf("%d",&number);
	while(1){
	int number;
	printf("Enter your number;");
	scanf("%d",&number);
	
		if (number<=0){
			printf("Wrong number\n");
			continue;
			
		}
		if (number>0 && number%2==0){
			printf("number= %d",number);
			break;
			
		}
	}
	
	
	
	return 0;
}