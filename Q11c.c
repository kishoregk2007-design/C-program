#include<stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	c=n/100;
	if(c/1==0){
		printf(" first digit of %d is even \n",c);
	}
	else{
			printf("first digit of %d is odd \n",c);
	}
}