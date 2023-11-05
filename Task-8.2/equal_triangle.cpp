//
//  equal_triangle.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "equal_triangle.hpp"
#include "wrong_data.hpp"

Equal_triangle::Equal_triangle() {
    A = 60; B = A; C = A;
    name = "Равносторонний треугольник";
}

Equal_triangle::Equal_triangle(int a, int b, int c, int A, int B, int C) {
    name = "Равносторонний треугольник";
    if (b == a && c == a) {
        this->a = a; this->b = b; this->c = c;
    } else {
        throw Wrong_data("Ошибка создания равностороннего треугольника. Причина: все стороны не равны");
    }
    if (A == 60 && B == 60 && C == 60) {
        this->A = A; this->B = B; this->C = C;
    } else {
        throw Wrong_data("Ошибка создания равностороннего треугольника. Причина: все углы не равны 60");
    }
}
