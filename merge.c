#include<conio.h>
#include<stdio.h>
void main()
{
	int a[50],b[50],c[100],m,n,i,j,k=0;
	clrscr();
	printf("\nEnter the size of first array:");
	scanf("%d",&m);
	printf("\nEnter the first array elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the size of second array :");
	scanf("%d",&n);
	printf("Enter the second array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	j=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
	k++;
	}
	if(i>=m)
	{
		while(j<n)
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	if(j>=n)
	{
		while(i<m)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
	printf("\n\nAfter Merge\n\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\t",c[i]);
	}
getch();
}