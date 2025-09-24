#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int lastdigit1=a%10;
	int lastdigit2=b%10;
	if (lastdigit1==lastdigit2){
		printf("both number have same last digit: %d\n",lastdigit1);
	}
	else{
		printf("it does not have same last digit:%d != %d\n",lastdigit1,lastdigit2);
	}
	return 0;
	
}