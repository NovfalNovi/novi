#include <stdio.h>

int main(void) {
	// your code goes here
	int a[20],n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
