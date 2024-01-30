#include<stdio.h>
main()
{
	char a[50],b[50];
	int i;
	printf("enter a and b string:");
	scanf("%s%s",a,b);
	while(a[i]==b[i] && a[i]!='\0' && b[i]!='\0')
	i++;
	if(a[i]=='\0' && b[i]=='\0')
	printf("both strings are same");
	else
	printf("both strings are not same");
}
