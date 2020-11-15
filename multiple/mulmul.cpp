#include<stdio.h>

int main() {
	int mul;
	scanf_s("%d",&mul);
	for (int multy = 1; multy <= 12; multy++) {
		printf("%d x %d = %d\n",mul,multy,mul*multy);
	}
}