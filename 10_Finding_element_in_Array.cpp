#include <iostream>

int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Legth of array
    int size_arr = sizeof(array) / sizeof(array[0][0]);
    int flag = 0;
    int x = 8;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        for (int j = 0; j < sizeof(array[0]) / sizeof(array[0][0]); j++)
        {
            if (array[i][j] == x)
            {
                flag = 1;
                std::cout << "Element Found : " << array[i][j] << " at position " << i << "." << j << std::endl;
            }
        }
    }
    if (flag == 0)
        std::cout << "Element Not Found " << std::endl;
}