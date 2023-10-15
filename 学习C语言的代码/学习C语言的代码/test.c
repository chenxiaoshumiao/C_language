#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

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
//strstr->字符串的查找
//char*strstr(const char*str,const char*strChatset)
// ----查找一个字符串  如果存在就返回 第一次出现相同  字符串首字符的地址。没找到就返回一个空指针
//UNLL--空指针-》'\0'

//char* my_strstr(const char* p1, const char* p2) {
//	assert(p1 && p2);
//	
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (!*s2) {//如果s2等于‘、0’
//		return p1;
//	}
//	while (*cur) {
//		s1 = cur;
//		s2 = p2;
//		while (*s1&& *s2  && !(*s1 -*s2)) {
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//		if (*cur == '\0')
//			return NULL ;//找不到字符串
//	}
//}
//
//
//int main() {
//	char p1[] = "adcb";
//	char p2[] = "dc";
//	char* ret = my_strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//} 
////8.strtok
////char*strtok(char*str,const char*sep)---sep分隔符的字符集合。分隔符的字符串
//
//int main()
//{
//	char arr[] = "zoo@kdo.ada.da";
//	char p[] = "@.";
//	char buf[1024] = { 0 };
//	//切割buf中的字符串
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret=strtok(arr,p); ret!=NULL; ret=strtok(NULL,p))
//	{//第二回输入时传UNLL；第一次后就记住第一次调用的arr字符串，但是第一次不能传NULL
//		printf("%s ",ret);
//	}
//}


//9.strerror----------返回错误码所对应的错误信息   errnum=错误码
//char*strerror(int errnum);----必须包含#include<errno.h>

//每一个错误码都是  都是一个错误信息。
//真实写的时候里面放入 errno->
//errno-是一个全局的错误码的变量
//当c语言的库函数在指行的过程中，发生了错误，就会把对应的错误码，赋值到errno中去。



//打开文件
////FILE* p = fopen("test.txt", "r");//"r"读文件的意思

  



//10.