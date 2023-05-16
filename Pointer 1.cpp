#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter value a=");
	scanf("%d",&a);
	printf("enter value b=");
	scanf("%d",&b);
	
	int *p,*p1,*p2;
	p=&a;
	p1=&b;
	
	p=p2;
	p=p1;
	p1=p2;
	
	printf("%u=>%d\n",p,*p);
	printf("%u=>%d\n",p+1,*(p+1));

}
