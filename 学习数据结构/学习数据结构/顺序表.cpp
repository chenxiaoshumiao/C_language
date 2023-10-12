#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//构造一个动态顺序表
typedef int SLDataType;
typedef struct Seqlist{
	SLDataType* elem;
	int size;
	int capacity;

}SL;
//顺序表的初始化
void SqeListInit(SL* ps) {
	ps->elem = NULL;
	ps->size = ps->capacity = 0;
}
//检查容量并且扩容
void SqeListcheckCapacity(SL* ps, SLDataType) {
	if

}
//顺序表尾插  
void SqeListpushBack(SL* ps, SLDataType x) {

}