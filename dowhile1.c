#include<stdio.h>
#include<conio.h>
void main(){
	char c;
	int choose,a,b;
	do{
	printf("1.Sum\n2.Sub\n3.Mul");
	scanf("%d",&choose);
	switch(choose){
	case 1:
		printf("enter a,b values");
		scanf("%d%d",&a,&b);
		printf("the sum of values are %d",a+b);
		break;
	case 2:
		printf("enter a,b values");
		scanf("%d%d",&a,&b);
		printf("the sum of values are %d",a-b);
		break;
	case 3:
		printf("enter a,b values");
		scanf("%d%d",&a,&b);
		printf("the sum of values are %d",a*b);
		break;
	default:
		printf("wrong input");
	}
	printf("if you want to reapet then press y/n");
	scanf("%c",&c);	
		}while(c=='y'&&c=='Y');
	}
