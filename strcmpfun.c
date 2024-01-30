#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	int s;
	printf("enter a and b string :");
	scanf("%s %s",a,b);
	s = strcmp(a,b);
	if (s==0)
	printf("both strings are same");
	else if(s>0)
	printf("stra is greater");
	else
	printf("strb is greater");
		
}
