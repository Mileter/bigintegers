#include <iostream>

// included it in the include folder of your compiler?
// use the <angle-brackets> instead of the double-quotes
#include <bigint/bigint.h>
//#include "bigint.h"

using namespace std;
using namespace larints;

int main() {
    // the 1000th fermats number
	// powers with strings can be used instead of bigint with direct values.
	
	// either use both strings
	// or both bigint VARIABLES
	
	// if there is a single constant,
	// use bigint::str
	
	// used as member string: VAR.str
	
	// big_pow is deprecated.
	
	bigint da2("2");
	
	for(int i = 0; i < 1000; i++)
		cout << bpow(da2, bpow(to_bigint("2"), to_bigint(i))) << "\n";
	
	// 1000'th fermats number calculation and printing
    cout << bpow(da2, bpow(to_bigint("2"), to_bigint("1000"))) << "\n";
	
    return 0;
}
