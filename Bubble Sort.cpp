#include<iostream>
using namespace std;

// BUBBLE SORTING PROGRAM //

void bubblesort(int array[], int length)  
{
	for ( int i = 0; i < length ; i ++ ) 
		for ( int j = 0; j< length - i - 1 ; j ++) 
			if ( array[j] > array[j+1] ) 
				array[j] = array[j] + array[j+1] - ( array[j+1] = array[j] ) ;	 // swapping numbers ( a = a+b - (b=a) )
}

int main()
{
	int data[] = { 14, 24, 33, 67, 1, 82, 7, 91, 51, 71, 11, 68, 61, 39, 93, 23, 85, 6, 64, 41, 84, 27, 30, 18, 22 } ;
	int Array_Length = sizeof(data) / sizeof(data[0]) ;  // Variable holding Length of Array Value
	
	bubblesort( data , Array_Length ) ;
	
	for( int i= 0; i < Array_Length ; i++ )   // loop to print elements of array 
		cout << " "<< data[i] ;
	
	return 0;
}

