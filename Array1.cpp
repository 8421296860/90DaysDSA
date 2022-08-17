#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr1[50];
    for (int i = 0; i < 50; i++)
    {
        arr1[i] = i + 1;
    }
    int n, num;
    cin >> n;
    for (n; n < sizeof(arr1); n++)
    {
        while (n != (sizeof(arr1) / sizeof(int) - 1))
            arr1[n] = arr1[n + 1];

        while (n == sizeof(arr1) / sizeof(int) - 1)
            arr1[n] = NULL;
    }
    for (int i = 0; i < sizeof(arr1); i++)
    {
        cout << " " << arr1[i];
    }
}
