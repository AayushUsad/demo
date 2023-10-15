#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter the value A:-");
	scanf("%d",&a);
	printf("Enter the value B:-");
	scanf("%d",&b);
	printf("Enter the value C:-");
	scanf("%d",&c);
	
	if(a==b|| b==c || a==c){
		printf("All value same");
	}
	else{
		if(a>b){		
			if(a>c){
				printf("A is big");
			}
		}
		else{
			if(b>c){
				printf("B is big");
			}
			printf("c is big");
		}
		
	}
}
