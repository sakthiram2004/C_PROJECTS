#include<stdio.h>
main()
{
	int a[50];
	int n,i,k,f,j;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
		
	}
	k=0;
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<k;j++)
		if(a[i]==a[j])
		{
			f=1;
			break;
		}
		if(f==0)
		{
		a[k]=a[i];
		k++;
	    }
	}
	for(i=0;i<k;i++)
	printf("%d",a[i]);
}
