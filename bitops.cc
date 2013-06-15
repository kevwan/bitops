#include <cstdio>

using namespace std;

// padding n by 4
int padByFour(int n)
{
	return (n - 1) | 0x3 + 1;
}

// check if n is the power of 2
bool isPowerOfTwo(int n)
{
	return n > 0 && n & (n - 1) == 0;
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