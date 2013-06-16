#include <cstdio>
#include <assert.h>

using namespace std;

// padding n by 4
int padByFour(int n)
{
	return ((n - 1) | 3) + 1;
}

// check if n is the power of 2
bool isPowerOfTwo(int n)
{
	return n > 0 && (n & (n - 1)) == 0;
}

// change the last bit 1 to 0
int zeroLastBitOne(int n)
{
	return n & (n - 1);
}

// count number of bit 1 in n
int numOfBitOne(int n)
{
	int result = 0;
	while (n)
	{
		n &= n - 1;
		++result;
	}
	return result;
}

int main()
{
	// test padByFour
	assert(0 == padByFour(-1));
	assert(0 == padByFour(0));
	assert(4 == padByFour(1));
	assert(4 == padByFour(2));
	assert(4 == padByFour(3));
	assert(4 == padByFour(4));

	// test isPowerOfTwo
	assert(!isPowerOfTwo(0));
	assert(isPowerOfTwo(1));
	assert(isPowerOfTwo(2));
	assert(!isPowerOfTwo(3));
	assert(isPowerOfTwo(4));
	assert(!isPowerOfTwo(5));

	// test zeroLastBitOne
	assert(0 == zeroLastBitOne(0));
	assert(0 == zeroLastBitOne(1));
	assert(0 == zeroLastBitOne(2));
	assert(2 == zeroLastBitOne(3));
	assert(0 == zeroLastBitOne(4));
	assert(8 == zeroLastBitOne(10));

	// test numOfBitOne
	assert(0 == numOfBitOne(0));
	assert(1 == numOfBitOne(1));
	assert(1 == numOfBitOne(2));
	assert(2 == numOfBitOne(3));
	assert(1 == numOfBitOne(4));
	assert(6 == numOfBitOne(63));
}