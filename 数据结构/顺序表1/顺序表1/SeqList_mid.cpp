#include <iostream>
using namespace std;
void Input(int a[], int n)
{//��������
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int Search_Mid(int A[], int B[], int n)
{//��������������е���λ��
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
        // ��̬��������
        int* A = new int[n];
        int* B = new int[n];

        // ��ȡ����
        Input(A, n);
        Input(B, n);

        // ������λ��
        int mid = Search_Mid(A, B, n);

        // ������
        cout << mid << endl;

        // �ͷ��ڴ�
        delete[] A;
        delete[] B;
    }

    return 0;
}
