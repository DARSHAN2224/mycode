#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int p = a * b;
	while (a != 0 && b != 0) {
		if (a > b) a %= b;
		else b %= a;
	}
	int gcd;
	if (a == 0) gcd = b;
	else gcd = a;
	printf("GCD is %d\n", gcd);
	int lcm = p / gcd;
	printf("LCM is %d\n", lcm);
}