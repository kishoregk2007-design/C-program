#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%3==0)
	printf("Number is divisible by 3");
	else if(n%5==0)
	printf("number is divisible by 5");
	else
	printf("it is not divisible");
	return 0;
}