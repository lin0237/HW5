#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int sum; 
	int a[11]={0}; //Array to count occurrences of sums(2 to 12)
	 
	srand(time(NULL));
	
	for(int i=0;i<36000;i++)
	{
		sum=(rand()%6+1)+(rand()%6+1); //The sum of dice 1 and dice 2
		/*if(sum==2)
		a[0]++;
		if(sum==3)
		a[1]++;
		if(sum==4)
		a[2]++;
		if(sum==5)
		a[3]++;
		if(sum==6)
		a++;
		if(sum==7)
		a++;
		if(sum==8)
		a++;
		if(sum==9)
		a++;
		if(sum==10)
		a++;
		if(sum==11)
		a++;
		if(sum==12)
		a++; The original calculation method*/
		a[sum]++;
	}
	printf("Sum\tFrequency\n");
	for(int sum=2; sum<=12; sum++)
	{
		printf("%d\t%d\n",sum,a[sum]);
	}
	return 0;
}
