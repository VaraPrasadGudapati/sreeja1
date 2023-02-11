#include<stdio.h>
#include<conio.h>
int main(){
	int ar[10][10],row,col,i,j;
	printf("enter the rows");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&ar[j][j]);
		
	}
printf("the matrix is *******\n");
for(i=0;i<row;i++){
	for(j=0;j<col;j++)
printf("%d\t",ar[i][j]);
printf("\n");
}
}

