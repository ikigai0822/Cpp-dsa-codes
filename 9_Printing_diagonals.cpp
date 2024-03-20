#include <iostream>

int main()
{
    int array_2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int size_r = sizeof(array_2d) / sizeof(array_2d[0]);
    int size_c = sizeof(array_2d[0]) / sizeof(array_2d[0][0]);

    // This is for printing primary diagonal elements
    std::cout << "This is the 2d array Principal Diagonal elements :";
    for (int i = 0; i < size_r; i++)
    {

        // for (int j = 0; j < size_c; j++)
        // {
        if (size_c == size_r)
        {

            std::cout << array_2d[i][i];
        }
        // }
    }
    std::cout << std::endl;
    // this is for priting secondary diagonal elements
    if (size_c == size_r)
    {
        std::cout << "This is the 2d array Secondary Diagonal elements :";
        for (int i = 0; i < size_r; i++)
        {
            std::cout << array_2d[i][size_r - 1 - i];
        }
        std::cout << std::endl;
    }
}