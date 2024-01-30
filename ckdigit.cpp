#include<stdio.h>
main()
{
	int n,r,s,c,r1;
	float avg;
	printf("enter n:");
	scanf("%d",&n);
	r=n%10;
	n=n/10;
	s=0;c=0;
	while(n!=0)
	{
		c++;
		r1=n%10;
		s=s+r1*2;
		n=n/10;
	}
	avg=(float)s/c;
	if(r==avg)
	printf("success");
	else
	printf("not success");
	
}
