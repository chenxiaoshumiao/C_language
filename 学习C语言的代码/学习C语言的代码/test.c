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
//	int(*arr[1])(int x, int y) = { Add };//����ָ������
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int(*p)[10]=&arr;
//	//����ָ��
//	//int(*p)(int,int)=Add;
//	// ����ָ������
//	// int(*pArr[5])(int ,int);
//	// ָ����ָ�������ָ��
//	// int(*(*pArr)[5])(int,int)=&pArr
//	//
//	
//	printf("%d", arr[0](3, 3));
//	return 0;
//	
//}


//ð������  se-1��
//
//-----------------------------------------------------------------------------------------------

///////////////////////////�ַ�������
////1,���ַ������ȵ�����ʵ��
//unsigned int my_strlen(const char* str) {//ԭ��ʱ�޷������Ρ� ���ǿ���д������ -�� ���⵽ʱ��ʹ�ü���ʱ����
//	assert(*str != NULL);//����ָ��str����Ϊ�ա�
//	int count=0;
//	while (*str != '\0') {//ѭ������
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
//	//��ԭ�⺯���ĶԱ�
//	printf("%d", strlen(arr));
//	return 0;
// }
//------------------------------------------------------------------------------------------------
//2.strcpy��ʵ�֣�----�ַ�������
//char*strcpy(char*dest,char*src)-ԭ����

//ʵ��strcpy
//char* my_strcpy(char* dest, const char* src) {//dest Ŀ������  srcԭ����
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	char ret = dest;//����һ����ָ���Ŀ������������ĸ��ַ
//	while (* dest++=* src++)//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
//	{
//		;
//	}
//	return ret;//����Ŀ�Ŀռ���ʼλ��
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

//3.ʵ��strcat ��ԭ�ַ���׷�ӵ�ĽĿ���ַ������档
//ԭ����  char*strcat(char*dest,const char*src)
  

//char*my_strcat(char*dest,const char*src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ����ġ�\0��
//	while (*dest)
//	{
//		dest++;
//	}
//	//�������ַ���׷���ں���
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

//4.strcmp---�ַ����Ƚ�
//int strcmp(const char*string1,const char*string2)
//�Ƚ�ʱ �ӵ�һ����ĸ��ʼ�ȴ�ͷ���1 ���ڼ����Ƚ� һ��һ����ĸ�ıȽ� ASCLLֵ 
//my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	//��ȵĻ�������
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	//����ȾͱȽϴ�С
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

//��Щ�������Ȳ������� ֱ��������\0����ֹͣ
////-------------------------------------------------------------------------------------------------/
//// -------------------------------------------------------------------------------------------------------
////------------------------------------------------------------------------------------------------------
//��Щ�����ַ�������������

//5.strncpy   ָ�� �����ͼ��� ��������Ͳ���\0'
//char* strncpy(char* dest, const char* src,size_t num);
////------------------------------------------------------------------------------------------------------
//6.strncat   ָ��������׷�Ӽ���  ׷�����������һ��'\0';��ʹ׷�ӵĸ����ȱ����ַ����� Ҳ����׷��Ͳ�0
//  char*strcat(char*dest,const char*src��size_t num)
// //-----------------------------------------------------------------------------------------------------
//7. strncmp    �ַ����ıȽϣ������ܹ�Ҫ�Ƚ϶��ٸ��ֽ�   ---�����ַ������ܱ��ı�
//char*strcmp(char*dest,const char*src��size_t count)	
//
//