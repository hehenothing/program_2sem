#include <iostream>
#include <vector>

#include "header1.h"
#include "header2.h"

int main()
{
    struct Vector2D vector = {2.0, 3.0};
    struct Vector2D square = {1.0, 1.0};
    moveSquare(&square, &vector);
    std::cout << square.x << ", " << square.y << std::endl;


    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    swapRows(matrix, 0, 2);
    std::cout << "after swapping rows:" << std::endl;
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
