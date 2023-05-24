#ifndef OP_HEADER2_H
#define OP_HEADER2_H
#pragma once

#include <vector>
#include <algorithm>

void swapRows(std::vector<std::vector<int>>& matrix, int row1, int row2)
{
    std::swap(matrix[row1], matrix[row2]);
}

#endif

