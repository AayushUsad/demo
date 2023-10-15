#include<stdio.h>
main(){
	int a,b,c;
	
	printf("enter the value A:-",a);
	scanf("%d",&a);
	printf("enter the value B:-",b);
	scanf("%d",&b);
	printf("enter the value C:-",c);
	scanf("%d",&c);
	
	if(a>b && a>c) {
		printf("a is big");
	}
	else if(b>a && b>c){
		printf("b is big");
	}
	else if(c>a && c>b){
		printf("c is big");
	}else if (a==b){
		printf("A and B are same");
	}else if (b==c){
		printf("b and c are same");
	}else if (c==a){
		printf("c and a are same");
	}else if(a==b==c){
		printf("All value same");
	}
	
}
