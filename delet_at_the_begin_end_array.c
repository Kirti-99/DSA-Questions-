// delete the element at the beginning in the array 

#include<stdio.h>
#include<stdlib.h>
#define size 20
int index=-1,i,a[size];
void at_begin(int x)
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

void at_pos(int p,int x)
{
	if(index < size-1)
	{
		if(p >= 0 && p <= index)
		{
			p = p-1;
			for(i=index;i>=p;i--)
			{
				a[i+1] = a[i];
			}
			a[p] = x;
			index++;
		}
		else
		{
			printf("Invalid position !!");
		}
	}
	else
	{
		printf("Array is full !!");
	}
}

void at_end(int x)
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

void delet_begin()
{
	if(index > -1)
	{
		printf("\n%d deleted element",a[0]);
		for(i=0;i<index;i++)
		{
			a[i] = a[i+1];
		}
		a[index] = '\0';
		index--;
	}
	else
	{
		printf("Array is EMPTY !!");
	}
}
void delete_end()
{
	if(index > -1)
	{
		printf("\n%d deleted element ",a[index]);
		a[index] = '\0';
		index--;
	}
	else
	{
		printf("Array is EMPTY !!");
	}
}
void traverse()
{
	if(index > -1)
	{
		printf("\n All values are : ");
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
    int x,v,p;
    do
    {
    printf("\nPress 1 for insert at the beginning..");
    printf("\nPress 2 for insert at the given position ..");
    printf("\nPress 3 for insert at the END ..");
    printf("\nPress 4 for traverse .. ");
    printf("\nPress 5 for delete at the beginning ..");
    printf("\nPress 6 for count elements..");
    printf("\nPress 7 for Exit..");
    printf("\nEnter your choice : ");
    scanf("%d",&x);
    
    	switch(x)
    	{
    		case 1 : printf("\nEnter a value : ");
    		         scanf("%d",&v);
    		         at_begin(v);
    		         break;
    		case 2 : printf("\nEnter a position : ");
    				 scanf("%d",&p);
    				 printf("Enter a value : ");
    				 scanf("%d",&v);
    				 at_pos(p,v);
    				 break;
    		case 3 : printf("\nEnter a value : ");
    		         scanf("%d",&v);
    		         at_end(v);
    		         break;
    		case 4 : printf("\nvalues are : ");
    		         traverse();
    		         break;
    	    case 5 : delet_begin();
    	             break;
    		case 6 : printf("\nTotal values are : %d",index+1);
    		         break;
    	    case 7 : exit(0);
		}
	}while(1);
	return 0;
}

















