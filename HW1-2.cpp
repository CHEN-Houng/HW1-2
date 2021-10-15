#include <iostream>
#include <afx.h>
using namespace std;

INT FibonacciSeries( INT nInputNumber )
// FibonacciSeries main function
{
	if( nInputNumber == 1 || nInputNumber == 2 ) {
		return 1;
	}
	else if( nInputNumber >= 3 && nInputNumber <= 46 ) {
		return FibonacciSeries( nInputNumber - 1 ) + FibonacciSeries( nInputNumber - 2 );
	}
	else {
		return 0;
	}
}

void Calculate( INT nFibonacciArray[] )
// Calculate fibonacciSeries from 1 to 20
{
	for( INT i = 0; i < 20; i++ ) {
		nFibonacciArray[ i ] = FibonacciSeries( i + 1 );
	}
}

void Print( INT nFibonacciArray[] )
// Print finbonacciSeries Results
{
	cout << "Item" << "\t" << "Fibonacci Results" << endl;
	for( INT i = 0; i < 20; i++ ) {
		cout << i + 1 << "\t" << nFibonacciArray[ i ] << endl;;
	}
}

INT main( void )
{
	INT nFibonacciArray[ 20 ];
	
	// Calculate Fibonacci
	Calculate( nFibonacciArray );
	
	// Print Calculate Results
	Print( nFibonacciArray );

	system( "PAUSE" );
	return 0;
}
