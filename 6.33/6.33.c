#include<stdio.h>

int BS(int a[],int s,int e,int k)//"s":start "e":end "k":key 
{
	if(s>e) //When start index > end index
		return -1; //invalid range
		
	int j=s+(e-s)/2; //Calculate intermediate index
	if(a[j]==k)
		return j;
	else if(a[j]>k)
			return BS(a,s,j-1,k); //Search left half region
	else if(a[j]<k)
			return BS(a,j+1,e,k); //Search right half region
 } 
 
int main()
{
	int a[]={2,5,9,15,23,28,30,47};
	int size= sizeof(a) / sizeof(a[0]); //Calculate array size
	int k=30; //Target value
    
	if(BS(a,0,size-1,k) != 1) //Find the target value
	{
		printf("Value %d found at index %d\n", k,BS(a,0,size-1,k));
	}
	else //Target value not found
	{
		printf("-1");
	}
	return 0;
}
