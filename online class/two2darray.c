#include <stdio.h>
int main() {
	int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
	for (int *p = &arr[0][0]; p <= &arr[2][2]; p++) {
		printf("%d ", *p);
	}
}