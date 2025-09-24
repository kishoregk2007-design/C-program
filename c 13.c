#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>0)
	printf("The given number is positive");
	else if(n<0)
	printf("The given number is negative");
	else
	printf("The given number is zero");
	return 0;
}