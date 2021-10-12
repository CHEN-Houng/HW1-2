#include <iostream>
#include <afx.h>
using namespace std;

INT FibonacciSeries( INT nInputNumber )
{
// FibonacciSeries main function
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

INT main( void )
{
    for( INT i = 1; i < 21; i++ ) {
		//  Generate the first 20 digits of the Fibonacci Series
        cout << "Item:\t" << i << "\t" << FibonacciSeries( i ) << endl;
    }
	system( "PAUSE" );
    return 0;
}