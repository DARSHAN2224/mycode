#include<stdio.h>
#include<string.h>
void findStrictlyIncreasingNum(int start, char out[], int n)
{
    // If number becomes N-digit, print it
    if (n == 0)
    {
        printf("%c " ,out);
        return;
    }
 
    // start from (prev digit + 1) till 9
    for (int i = start; i <= 9; i++)
    {
        // append current digit to number
        char str[100] = out + to_string(i);
 
        // recurse for next digit
        findStrictlyIncreasingNum(i + 1, str, n - 1);
    }
}
 
// Driver code
int main()
{
    int n = 3;
    findStrictlyIncreasingNum(0, "", n);
    return 0;
}