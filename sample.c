#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	int l1,l2,k,i,j,c;
	printf("enter 2 strings:");
	scanf("%s %s",a,b);
	
	l1=strlen(a);
	l2=strlen(b);
	c=0;
	for(i=0;i<l1;i++)
	{
	for(j=0;j<l2;j++)
	
	
	if(a[i]==b[j])
	{
		c++;
		for(k=j;k<l2-1;k++)	
	    	b[k]=b[k+1];
		break;	
    }
}
    l2--;
    }
    printf("Count = %d",c);
}
