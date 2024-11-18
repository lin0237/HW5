#include<stdio.h>

void Reverse(char a[])
{
	if(*a=='\0')
	{
		return; //End recursion when encountering the end character
	}
	printf("%c",*a);
	Reverse(a-1);
}
int main()
{
	char a[]={"I am a student."};
	printf("Original String: %s\n",a); //Print original string
	printf("Reversed String: ");
	Reverse(a+14); //Call Reverse function
	printf("\n");
	
	return 0;
}
