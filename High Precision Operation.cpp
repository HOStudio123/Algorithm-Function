#include <iostream>
#include <string>
#define maxn 600000

using namespace std;

string plus_jf(string A, string B)
{
    string C;
    int a[maxn] = {0}, b[maxn] = {0}, c[maxn] = {0};
    int l = max(A.length(), B.length());
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
        c[i] += a[i] + b[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }
    if (c[l + 1])
        l++;
    for (int i = l; i >= 1; i--)
    {
        C += c[i] + '0';
    }
    return C;
}

string minus_jf(string A, string B)
{
    string C;
    int a[maxn] = {0}, b[maxn] = {0}, c[maxn] = {0};
    int l = max(A.length(), B.length());
    int sign = 0, k = 0;
    if (A.length() < B.length())
    {
        sign = 1;
    }
    else if (A < B && A.length() == B.length())
    {
        sign = 1;
    }
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
    if (sign == 1)
    {
        C += "-";
    }
    for (int i = l; i >= 1; i--)
    {
        if (c[i] != 0 || k != 0)
        {
            C += c[i] + '0';
            k = 1;
        }
    }
    if (k == 0)
    {
        C = "0";
    }
    return C;
}
int main()
{
    string A, B;
    cin >> A >> B;
    cout << plus_jf(A, B) << end << minus_jf(A, B);
}