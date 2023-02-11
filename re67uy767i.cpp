#include<stdio.h>
#include<stdlib.h>
int main(){
	int*ptr,i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	ptr=(int*)calloc(n,size of(int));
	if(ptr==NULL)
	printf("memory is not allocated succesfully")
	else
	printf("memory is allocated");
	for(i=0;i<n;i++)
	ptr[i]=i+1;
	printf("%d",ptr[i]);
	free(ptr)
	if(ptr==NULL)
	printf("memory is not clear");
	else
    printf("memory is clear");
    return0;
}
