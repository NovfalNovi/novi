#include <stdio.h>

int main(void) {
	// your code goes here
	int a[20],j,n,i=0,k=0,max,s=0,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[i];
	//s=a[i];
	for(i=0;i<n;i++)
	{
		s=a[i];
		for(j=i+1;j<n;j++)
		{
			s=s+a[j];
			if(max<s)
			{
				
				b=i;
				c=j;
				max=s;
			}	
		}
	}
	for(i=b;i<=c;i++)
	{
		printf("%d\t",a[i]);
	}
//	printf("%d",max);
	return 0;
}
