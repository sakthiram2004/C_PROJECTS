#include<stdio.h>
#include<ctype.h>
main()
{
	char a[50],ch;
	int i;
	printf("enter a str :");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
	    ch=tolower(a[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("%c\n",a[i]);
		i++;
		
	}
	
}
