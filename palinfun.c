#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	int s;
	printf("enter a str :");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	s=strcmp(b,a);
	if(s==0)
	printf("both strings are same");
	else
	printf("both strings are not same");
}
