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
//-----------------------------------------------------------------------------------------------

///////////////////////////字符串函数
////1,求字符穿长度的自我实现
//unsigned int my_strlen(const char* str) {//原来时无符号整形。 我们可以写成整形 -》 避免到时候使用减法时出错。
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
//------------------------------------------------------------------------------------------------
//2.strcpy的实现；----字符串长度
//char*strcpy(char*dest,char*src)-原函数

//实现strcpy
//char* my_strcpy(char* dest, const char* src) {//dest 目标数组  src原数组
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	char ret = dest;//创建一个新指针存目标宿主的首字母地址
//	while (* dest++=* src++)//把src指向的字符串拷贝到dest指向的空间，包含'\0'
//	{
//		;
//	}
//	return ret;//返回目的空间起始位置
//}
//
//int main() {
//	char arr1[] = "$$$$$$$$$$$$$$";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//----------------------------------------------------------------------------------------

//3.实现strcat 把原字符串追加到慕目标字符串后面。
//原函数  char*strcat(char*dest,const char*src)
  

//char*my_strcat(char*dest,const char*src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.找到目标字符串的‘\0’
//	while (*dest)
//	{
//		dest++;
//	}
//	//将后面字符串追加在后面
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//} 
//int main() {
//	char arr1[20] = "holle ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//-------------------------------------------------------------------------------------------

//4.strcmp---字符串比较
//int strcmp(const char*string1,const char*string2)
//比较时 从第一个字母开始比大就返回1 等于继续比较 一个一个字母的比较 ASCLL值 
//my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	//相等的话往后找
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	//不相等就比较大小
//	if (*str1 > *str2) {
//		return 1;
//	}
//	else
//		return -1;
// }
//
//
//
//	 int main() {
//	 char* p1 = "abcdef";
//	 char* p2 = "aqwer";
//	 int ret = my_strcmp(p1, p2);
//	 printf("%d\n", ret);
// }

//这些函数长度不受限制 直到遇到’\0‘才停止
////-------------------------------------------------------------------------------------------------/
//// -------------------------------------------------------------------------------------------------------
////------------------------------------------------------------------------------------------------------
//这些函数字符串长度受限制

//5.strncpy   指定 几个就几个 如果不够就补’\0'
//char* strncpy(char* dest, const char* src,size_t num);
////------------------------------------------------------------------------------------------------------
//6.strncat   指定几个就追加几个  追加完后主动补一个'\0';即使追加的个数比本身字符串长 也不管追完就补0
//  char*strcat(char*dest,const char*src，size_t num)
// //-----------------------------------------------------------------------------------------------------
//7. strncmp    字符串的比较，加了总共要比较多少个字节   ---常量字符串不能被改变
//char*strcmp(char*dest,const char*src，size_t count)	
//
//