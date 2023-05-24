#ifndef OP_HEADER1_H
#define OP_HEADER1_H
#pragma once

struct Vector2D
{
    float x;
    float y;
};

void moveSquare(Vector2D* square, const Vector2D* vector)
{
    square->x += vector->x;
    square->y += vector->y;
}

#endif //OP_HEADER1_H
