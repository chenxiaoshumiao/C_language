#include<stdio.h>
int main() {
	int a = 1;
	/*char* p =(char*) & a;
	if (*p == 1) {
		printf("С��");
	}
	else
		printf("���");
	return 0;*/
	if (*(char*)&a==1) {
		printf("С��");
	}
	else
		printf("���");
	return 0;

}