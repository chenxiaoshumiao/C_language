#include <iostream>
using namespace std;
void Input(int a[], int n)
{//读入序列
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int Search_Mid(int A[], int B[], int n)
{//求解两个升序序列的中位数
/**************begin************/
    int sa = 0;
    int sb = 0;
    int tmp = n;

    for (int i = 1; i < tmp; i++) {
        if (A[sa] > B[sb]) {
            sb++;
        }
        else if (A[sa] < B[sb]) {
            sa++;
        }
        else sa++;

    }
    if (A[sa] > B[sb]) {
        return B[sb];
    }
    else
        return A[sa];

    /**************end************/
}
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        // 动态分配数组
        int* A = new int[n];
        int* B = new int[n];

        // 读取输入
        Input(A, n);
        Input(B, n);

        // 查找中位数
        int mid = Search_Mid(A, B, n);

        // 输出结果
        cout << mid << endl;

        // 释放内存
        delete[] A;
        delete[] B;
    }

    return 0;
}
