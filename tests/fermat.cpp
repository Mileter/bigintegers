/*
    bigint.h

    bigint Library for C++

    MIT License
	
	Created by Mileter on 05-10-2024
	Copyright (c) 2024 Mileter

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

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
