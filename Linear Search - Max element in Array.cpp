#include<stdio.h>

int main()
{
	int data[] = { 2,1,3,34,52,31,24,43} ;
	int ArrayLen = sizeof(data) / sizeof(data[0]) ; 
	for( int i = 0 ; i < ArrayLen; i++ )
	{
		if (data[0] < data[i]) 
		{
			data[0] = data[i] ;
		}
	}
	printf("%d",data[0]);
	return 0;
}