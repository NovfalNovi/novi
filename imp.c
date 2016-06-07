#include <stdio.h>

int main(void) {
	// your code goes here
int a[60];
	int i=0,j=0,n=50,temp=0,k;
//	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[j]>a[i])
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
 }
 }
}
printf("%d ",a[3]);
scanf("%d",&k);
printf("%d",a[k]);
			
		
	return 0;
}
