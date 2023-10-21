#include<stdio.h>
int main()
{
	char a[5];
	int c,p,n,z;
	p=0;
	n=0;
	z=0;
	
	do
	{
		printf("Enter number\n");
		scanf("%s",a);
		if (a[0]!='-')
		{
			if(a[0]=='0')
			z++;
			else
			p++;
		}
		else if(a[0]=='-')
		n++;
		printf("do you try again y=1 n=0\n");
		scanf("%d",&c);
	}
	while(c==1);
	printf("positive = %d \nnegative = %d \nzero = %d",p,n,z);
}
