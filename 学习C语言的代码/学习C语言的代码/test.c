#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y) {
	return (x + y);
}
int main() {

	int n = 10;

	int(*arr[1])(int x, int y) = { Add };//函数指针数组

	
	printf("%d", arr[0](3, 3));
	return 0;
	
}