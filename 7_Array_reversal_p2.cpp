#include <iostream>

int main()
{
    int a[] = {1, 2, 3, 4, 5,6,7,8,9,0};

    int l = 0;
    int n = sizeof(a) / sizeof(a[0]);
    int r = n - 1;
    while (l < r)
    {
        int temp = a[r];
        a[r] = a[l];
        a[l] = temp;
        l++;
        r--;
    }
    std::cout << "This is the reversed array without using extra space ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i];
    }
}