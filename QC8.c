#include<stdio.h>
int main(){
 int a;
 scanf("%d",&a);
 if(a%3==0){
 	printf("the last digit of %d is divisible by 3.\n",a);
 }
 else{
 	printf("the last digit of % is not divisible by 3.\n",a);
 }
  return 0;
}