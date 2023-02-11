#include<stdio.h>
enum cont{
	conti1=10,conti2=12, conti0=13
};
int main(){
	enum cont x=conti0;
	printf("The continer value is %d",x);
	x=conti2;
	printf("The continer value is %d",x);
	return 0;
}
