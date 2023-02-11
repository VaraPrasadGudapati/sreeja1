#include<stdio.h>
#include<conio.h>
void main(){
int rows,col;
  for(rows=1;rows<=5; rows++){
   if(rows==3||col==3&&col==1|| col==5)
    printf("*");
   else
   printf(" ");
}
}
