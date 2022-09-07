#include<stdio.h>

int main()
{
	int data[] = { 67,6,3,56,5,7,9,5,4} ; 
	int Array_Length = sizeof(data)/sizeof(data[0]) ;
	
	for (int i = 0; i < Array_Length; i++ )
	{
		if ( data[0] > data[i] ) 
		{
			data[0] = data[i];
		}
	}
	printf("The element with least value in the array is %d",data[0] );
	return 0;
}