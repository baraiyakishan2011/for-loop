#include<stdio.h>

main(){
	
	int i,n,sum;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	for(i=1,sum=0;i<=n;i++){
		sum=sum+i;	
	}
	
	printf("%d",sum);
}