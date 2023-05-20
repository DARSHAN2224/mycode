#include <stdio.h>
int main() {
	int i = 134;
	i++; // i = 135
	i--; // i = 134
	i++; // i = 135
	i--; // i = 134
	i++;
	i++;
	i++;
	i++;
	i--;
	i--;
	printf("%d", i);
}