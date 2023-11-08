#include<stdio.h>
#include<conio.h>
int  main()
{
	int array[5],n=5,i,j,round,min_index,min;
	printf("enter five integers");
	for( i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("\nsorted values are ->");
    for(i=0;i<n-1;i++)
    {   min=array[i];
    min_index=i;
    int temp;
    	for(j=i+1;j<n;j++)
    	{
    	  if(min>array[j])
		  {
		  	min=array[j];
		  	min_index=j;
			  }	
		}
		temp=array[i];
		array[i]=array[min_index];
		array[min_index]=temp;
		
	}
	
    	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
}
