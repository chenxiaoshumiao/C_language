#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ����̬˳���
typedef int SLDataType;
typedef struct Seqlist{
	SLDataType* elem;
	int size;
	int capacity;

}SL;
//˳���ĳ�ʼ��
void SqeListInit(SL* ps) {
	ps->elem = NULL;
	ps->size = ps->capacity = 0;
}
//���������������
void SqeListcheckCapacity(SL* ps, SLDataType) {
	if

}
//˳���β��  
void SqeListpushBack(SL* ps, SLDataType x) {

}