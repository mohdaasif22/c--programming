#include<stdio.h>
int main(){
	int i=1,num;
	printf("enter number");
	scanf("%d",&num);
	while(i<num){
		printf("%d\t",i);    
		i+=1;
	}
	return 0;
}
