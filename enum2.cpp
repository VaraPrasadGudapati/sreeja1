#include<stdio.h>
enum week{sun=1,mon,tue,wed,thi,fri,sat};
int main(){
	int i;
	for(i=sun;i<=sat;i++)
	printf("%d",i);
	return 0;
}
