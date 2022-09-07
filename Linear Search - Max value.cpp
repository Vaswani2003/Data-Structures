#include<stdio.h>

int main()
{
	int data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int value,flag=0,Array_Length = sizeof(data)/sizeof(data[0]) ;
	
	printf("Enter value you are looking for :");
	scanf("%d",&value);
		
	for(int i=0; i<Array_Length; i++)
	{
		if( data[i] == value )
		{
			flag += 1;
			printf("\nThe index of %d is %d",value,i);
			printf("\nThe position of %d is %d",value, i+1);
			printf("\nThe element was %d",data[i]);
			break;
		}
	}
	
	if ( flag == 0 )
	{	printf("\nThe element %d does not exist in the array",value); }
	
	return 0;
}
