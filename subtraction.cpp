#include <iostream>
#include <string>
#define maxn 200000
using namespace std;
int a[maxn], b[maxn], c[maxn];
int main()
{
    string A, B;
    cin >> A >> B;
    int l = max(A.length(), B.length());
    int sign = 0;
    if (A.length() < B.length())
        sign = 1;
    else if (A < B && A.length() == B.length())
        sign = 1;
    for (int i = A.length() - 1, j = 1; i >= 0; i--, j++)
    {
        a[j] = A[i] - '0';
    }
    for (int i = B.length() - 1, j = 1; i >= 0; i--, j++)
    {
        b[j] = B[i] - '0';
    }
    for (int i = 1; i <= l; i++)
    {
        if (sign == 0)
        {
            c[i] += a[i] - b[i];
        }
        else
        {
            c[i] += b[i] - a[i];
        }
        if (c[i] < 0)
        {
            c[i + 1]--;
            c[i] += 10;
        }
    }
    int k = 0;
    if (sign == 1)
        cout << "-";
    for (int i = l; i >= 1; i--)
    {
        if (c[i] != 0 || k != 0)
        {
            cout << c[i];
            k = 1;
        }
    }
    if (k==0){
        cout<<0;
    }
}