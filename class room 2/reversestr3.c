// C++ program to print all n-digit numbers whose digits
// are strictly increasing from left to right
#include <stdio.h>
// Function to print all n-digit numbers whose digits
// are strictly increasing from left to right.
// out --> Stores current output number as string
// start --> Current starting digit to be considered
void findStrictlyIncreasingNum(int start, char out[10], int n)
{
	// If number becomes N-digit, print it
	if (n == 0)
	{
		printf("%s ",out);
		return;
	}

	// start from (prev digit + 1) till 9
	for (int i = start; i <= 9; i++)
	{
		// append current digit to number
		char str[10] = out + (char)i;

		// recurse for next digit
		findStrictlyIncreasingNum(i + 1, str, n - 1);
	}
}

// Driver code
int main()
{
	int n;
    scanf("%d",&n);
	findStrictlyIncreasingNum(0, " ", n);
	return 0;
}
