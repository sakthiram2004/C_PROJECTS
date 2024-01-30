#include<stdio.h>
main()
{
	char a[50];
	int i;
	printf("enter a string:");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		if (a[i]>=65 && a[i]<=90)
		a[i]=a[i]+32;
		
		else if(a[i]>=97 && a[i]<=122)
		a[i]=a[i]-32;
		
		else
		a[i] = a[i];
		
		i++;
	}
	printf("%s",a);
}
