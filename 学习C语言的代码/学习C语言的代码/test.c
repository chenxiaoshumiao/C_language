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
//strstr->�ַ����Ĳ���
//char*strstr(const char*str,const char*strChatset)
// ----����һ���ַ���  ������ھͷ��� ��һ�γ�����ͬ  �ַ������ַ��ĵ�ַ��û�ҵ��ͷ���һ����ָ��
//UNLL--��ָ��-��'\0'

//char* my_strstr(const char* p1, const char* p2) {
//	assert(p1 && p2);
//	
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (!*s2) {//���s2���ڡ���0��
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
//			return NULL ;//�Ҳ����ַ���
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
////char*strtok(char*str,const char*sep)---sep�ָ������ַ����ϡ��ָ������ַ���
//
//int main()
//{
//	char arr[] = "zoo@kdo.ada.da";
//	char p[] = "@.";
//	char buf[1024] = { 0 };
//	//�и�buf�е��ַ���
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret=strtok(arr,p); ret!=NULL; ret=strtok(NULL,p))
//	{//�ڶ�������ʱ��UNLL����һ�κ�ͼ�ס��һ�ε��õ�arr�ַ��������ǵ�һ�β��ܴ�NULL
//		printf("%s ",ret);
//	}
//}


//9.strerror----------���ش���������Ӧ�Ĵ�����Ϣ   errnum=������
//char*strerror(int errnum);----�������#include<errno.h>

//ÿһ�������붼��  ����һ��������Ϣ��
//��ʵд��ʱ��������� errno->
//errno-��һ��ȫ�ֵĴ�����ı���
//��c���ԵĿ⺯����ָ�еĹ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��ȥ��



//���ļ�
////FILE* p = fopen("test.txt", "r");//"r"���ļ�����˼

  
//======================================================================================


        


////�ṹ������
//struct s{
// char c;
// int a;
// double d;
// };
//�ṹ�����ͳ�ʼ��
//struct s s1={a,2,2.3,};
////�������ṹ������
//typedef struct Ndoe {
//    int data;
//    struct Ndoe* next;
//
//}N;
//�����ṹ�� ����û�б�ǩ
//-------------------------------------------------------------------------
//�ṹ���ڴ����
//struct S4
//{
//    char c1;
//    int a;
//    double d;
//};
//int main() {
//    printf("%d\n", sizeof(struct S4));
//}

// ========================================================================
//ö������
//enum color {
//    RED,//Ĭ��Ϊ0             
//    GRENN,//Ĭ��Ϊ1           ->���Ը�ֵΪ��  
//    BLUE��//2
//};
//int main() {
//    printf("%d\n", sizeof(enum color));
//}
//�ڴ��СΪ 4

//==================================================================================

//���ϣ������壩(������)
// 
// 
//����Ҳ��һ��������Զ�������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա��
//��������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩��

//union u {
//    char c;
//    int i;
//};
// i c ȡ�����ĵ�ַ��һ����-------������ͬһʱ�� i��c����ͬʱ���ڣ���������1
////���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�
// ����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С
// ����Ϊ���ϡ����ٵ����������������Ǹ���Ա������



//�жϵ�ǰ������Ĵ�С�˴洢
//----------�ɴ���
//int main() {
//    int a = 1;
//    char* i = &a;//*(char*)&a
//    printf("%d", *i);
//}
//------------��������������
//union un {
//    char c;//----cΪ��һ���ֽ�  ����ʹ��ָ�� 
//    int  i;
//}u;
//int main() {
//  
//    u.i = 1;
//    printf("%d", u.c);
//}

//���ϵĴ�С����������Ա�Ĵ�С��
//����������Ĵ�С�� ���������� ����������������������������
  //������������ʱ  ��������������Ԫ�صĴ�С��






//��̬�ڴ�ֲ�

//struct S {
//    char name;
//    int age;
//};
//
//
//int main() {
//
//    struct S arr[50];//50��������ô�죿������ô�졣
//   //arr[n]??   C99֧�ֱ䳤����  �������ڴ��������������֧��
// 
//    return 0;
//}
int main() {
    //���ڴ�����10�����οռ�
    int* p = malloc(10 * sizeof(int));
    //���ܻ�ʧ��
    if (p == NULL) {
        printf("%s\n", strerror(errno));

    }
    else {
        //���ٳɹ� ����ʹ��
        int i = 0;
        for (i = 0; i < 10; i++) {
            *(p + i) = i;
        }
        for (i = 0; i < 10; i++) {
            printf("%d " ,* (p + i));
        }
    }
    free(p);//�ͷ�ptr��ָ��Ķ�̬�ڴ�
    p = NULL;//�Ƿ��б�Ҫ��
    return 0;
}