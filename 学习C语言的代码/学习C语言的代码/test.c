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


///////////////////////////�ַ�������
////1,���ַ������ȵ�����ʵ��
//unsigned int my_strlen(const char* str) {
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