#include<stdio.h>
void multiple(int m) {
	for (int multy = 1; multy <= 12; multy++) {
		printf("%d x %d = %d\n", m, multy, m * multy);
	}
}
int main() {
	int mul;
	scanf_s("%d",&mul);
	multiple(mul);
}