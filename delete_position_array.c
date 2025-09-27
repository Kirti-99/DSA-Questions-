// delete element at the ending Position and Specific Position 

#include<stdio.h>
#define size 20
int a[size],i,index=-1;
void int_begin(int x)
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
		printf("\nArray is FULL !!");
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
		printf("Array is FULL !!");
	}
}
void inst_pos(int p,int x)
{
	if(index < size-1)
	{
		p = p - 1;
		if(p>=0 && p<=index)
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
			printf("\ninvalid position !! ");
		}
	}
	else
	{
		printf("\nArray is FULL !!");
	}
}
void delete_begin()
{
	if(index > -1)
	{
		for(i=0;i<index;i++)
		{
			a[i] = a[i+1];
		}
		a[index] = '\0';
		index--;
	}
	else
	{
		printf("\nArray is EMPTY !!");
	}
}
void delete_end()
{
	if(index > -1)
	{
		a[index] = '\0';
		index--;
	}
	else
	{
		printf("\nArray is EMPTY !!");
	}
}
void delete_pos(int p)
{
	if(index > -1)
	{
		p = p-1;
		if(p>=0 && p<=index)
		{
			for(i=p;i<index;i++)
			{
				a[i] = a[i+1];
			}
				a[index] = '\0';
				index--;
		}
		else
		{
			printf("\ninvalid position");
		}
	}
	else
	{
		printf("\nArray is EMPTY !!");
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
		printf("\nArray is 	EMPTY !! ");
	}
}

int main()
{
	traverse();
	int_begin(50);
	traverse();
	int_begin(90);
	traverse();
	int_begin(65);
	traverse();
	inst_end(99);
	traverse();
	inst_end(85);
	traverse();
	inst_pos(2,66);
	traverse();
	delete_begin();
	traverse();
	delete_end();
	traverse();
	delete_pos(2);
	traverse();
	return 0;
}
