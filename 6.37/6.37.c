#include<stdio.h>
#include<time.h>

int max=0;
//To find the maximum
int M(int a[],int n)
{
	if(a[n]>max)
		max=a[n]; //Set the original maximum
	if(n==0)
		return max;
	M(a,n-1);
}
int main()
{
	int i,a[10];
	srand(time(NULL));
	printf("a[]={");
	for(i=0;i<10;i++)
	{
		a[i]=(rand()%100);
		printf("%d ",a[i]);
	}
	printf("}\n");
	//Print the result and call Maximun function 
	printf("The maximum value: %d\n",M(a,10));
}
