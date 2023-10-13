#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int Add(int x, int y) {
//	return (x + y);
//}
//int main() {
//
//	int n = 10;
//
//	int(*arr[1])(int x, int y) = { Add };//函数指针数组
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int(*p)[10]=&arr;
//	//函数指针
//	//int(*p)(int,int)=Add;
//	// 函数指针数组
//	// int(*pArr[5])(int ,int);
//	// 指向函数指针数组的指针
//	// int(*(*pArr)[5])(int,int)=&pArr
//	//
//	
//	printf("%d", arr[0](3, 3));
//	return 0;
//	
//}


//冒泡排序  se-1躺
//


///////////////////////////字符串函数
////1,求字符穿长度的自我实现
//unsigned int my_strlen(const char* str) {
//	assert(*str != NULL);//断言指针str不能为空。
//	int count=0;
//	while (*str != '\0') {//循环条件
//		
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main() {
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	//与原库函数的对比
//	printf("%d", strlen(arr));
//	return 0;
// }