#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int h = i;
        while (h > 0 && temp < a[h - 1])
        {
            a[h] = a[h - 1];
            h = h - 1;
        }
        a[h] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter value of n : \n";
    cin >> n;
    int a[n];
    cout << "Enter n elemtents to be sorted : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}