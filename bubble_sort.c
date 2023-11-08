#include<stdio.h>
#include<conio.h>
int  main()
{
	int array[5],n=5,i,j,round;
	printf("enter five integers");
	for( i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("\nsorted values are ->");
    
    for(round=1;round<n;round++)
    {
    	for(j=0;j<n-round-1;j++)
    	if(array[j]>array[j+1])
    	{int temp;
    	  temp=array[j];
    	  array[j]=array[j+1];
    	  array[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
    
}
