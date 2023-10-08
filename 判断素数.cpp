#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int i =0;
	int j =0;
	int a =0;
	int count =0;
	int isprime = 1;
	printf("求_以下素数个数并打印出来");
	scanf("%d", &i);
	for (j = 1; j <= i; j++) {
		for (a = 2; a <= sqrt(j); a++) {
			if (j % a == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime == 1) {
			count++;
			printf("%d ", j);
		}
		isprime = 1;
	}
	printf("\n%d\n", count);
	return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main() {
//    int i = 0;
//    int j = 0;
//    int a = 0;
//    int count = 0;
//    int isprime = 1;
//    printf("求i以下的素数个数并打印出来,请输入i=");
//    scanf_s("%d", &i);
//    for (j = 1; j <= i; j++) {
//        for (a = 2; a <= sqrt(j); a++) {
//            if (j % a == 0) {
//                isprime = 0;
//                break;
//            }
//        }
//        if (isprime == 1) {
//            count++;
//            printf("%d ", j);
//        }
//        isprime = 1; // 重置isprime为1，用于下一次循环判断
//    }
//    printf("\n%d\n", count);
//    return 0;
//}
