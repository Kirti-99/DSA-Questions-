// insert in array at the ending position ...

#include<stdio.h>
#define size 10
int index = -1,i,a[size];
void inst_beg(int x)
{
	if(index < size-1)
	{
		for(i=index;i>=0;i--)
		{
			a[i+1] = a[i];
		}
		a[0] = x;
		index++;
	}
	else
	{
		printf("Array is full !!");
	}
}
void inst_pos(int p,int x)
{
	if(index < size-1)
	{
		p = p-1;
		if(p >= 0 && p <= index)
		{
			for(i=index;i>=p;i--)
			{
				a[i+1] = a[i];
			}
			a[p] = x;
			index++;
		}
		else
		{
			printf("invalid position !!");
		}
	}
	else
	{
		printf("Array is full !!");
	}
	
}
void inst_end(int x)
{
	if(index < size-1)
	{	
	index++;
	a[index] = x;
	}
	else
	{
		printf("Array is full !!");
	}
}
void traverse()
{
	if(index > -1)
	{
		printf("\nAll values are : ");
		for(i=0;i<=index;i++)
		{
			printf(" %d ",a[i]);
		}
	}
	else
	{
		printf("Array is EMPTY !!");
	}
}
int main()
{
	traverse();
	inst_end(50);
	traverse();
	inst_end(55);
	traverse();
	inst_beg(30);
	traverse();
	inst_end(99);
	traverse();
	inst_beg(39);
	traverse();	
	inst_pos(3,90);
	traverse();
  	return 0;
}
