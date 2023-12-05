#include<stdio.h>

main()
{
	int i,f,n;

	printf("Enter value of N : ");
	scanf("%d",&n);

	for(i=1,f=1;i<=n;i++){
		f = f*i;
	}
	
	printf("The value of %d is %d",n,f);
}
