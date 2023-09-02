#include<stdio.h>
int main(){
	int first_number,second_number,sub,multiplication,division,sum,result;
	printf("enter the first_number");
	scanf("%d,&first_number");
	printf("enter the second number");
	scanf("%d,&second_number");
	sum=first_number+second_number;
	sub=first_number-second_number;
	multiplication=first_number*second_number;
	division=first_number/second_number;
	printf("multiplication of two number is %d\n",result);
	printf("addition of two number is %d\n",result);
	printf("sub of two number is %d\n",result);
	printf("division of two number is %d\n",result);
	return 0;
}
