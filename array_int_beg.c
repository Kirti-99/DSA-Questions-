// array to insert the element at the starting position in the array .... 

#include<stdio.h>
#define size 10
	int a[size],i;
	int index = -1;
void int_beg(int x)
{
	if(index < size-1)
	{
		for(i=index;i>=0;i--)
		{
			a[i+1]=a[i];
		}
			a[0] = x;
			index++;
	}
	else
	{
		printf("\nArray is full ....");
	}
}
void taverse()
{
	if(index > -1)
	{
		printf("\nArray element are : ");
		for(i=0;i<=index;i++)
		{
			printf(" %d ",a[i]);
		}
	}
	else
	{
		printf("\nArray is empty..");
	}
}	
int main()
{
	taverse();
	int_beg(52);
	taverse();
	int_beg(31);
	taverse();
	int_beg(63);
	taverse();
	int_beg(70);
	taverse();
	int_beg(75);
	taverse();
	int_beg(99);
	taverse();
		
	return 0;
}
	

