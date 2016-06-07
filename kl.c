#include <stdio.h>

int main(void) {
	// your code goes here
int a[20],b[20];
	int i=0,j=0,n,k,c=0;
	scanf("%d",&k);
	scanf("%d",&n);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&b[i]);
	}
//	for(i=0;i<k;i++)
//		printf("%d",a[i]);
//	for(i=0;i<n;i++)
//		printf("%d",b[i]);
	
for(i=0;i<k;i++)
{
 for(j=0;j<n;j++)
 {
  if(a[i]==b[j])
 {
 	c++;
 }
 }
}
//printf("%d",c);
if(c==k)
{
printf("a is a subset of b ");
}
else
{
printf("a is not a subset of b");
}			
		
	return 0;
}
