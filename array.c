# include<stdio.h>

//   ARRAYS

// used to store multiple data in one variable 
	// datatype arrayName[array size];

int main(){
	int age[5];
	// to obtain multiple inputs we can use a for loop 
	printf("Please enter 5 elements");
		for (int i=0;i<5;++i){
			scanf("%d",&age[i]);
		}
	//int ages[]={21,45,6,32,42};
		for (int i=0;i<5;++i){
			printf("%d",&age[i]);
		}
	return 0;
}