#include <iostream>

int main()
{
    int array_2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int size_r = sizeof(array_2d) / sizeof(array_2d[0]);
    int size_c = sizeof(array_2d[0]) / sizeof(array_2d[0][0]);
    std::cout << "This is the 2d array :";
    for (int i = 0; i < size_r; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < size_c; j++)
        {
            std::cout << array_2d[i][j];
        }
    }
}