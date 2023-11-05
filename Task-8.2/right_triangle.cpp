//
//  right_triangle.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "right_triangle.hpp"
#include "wrong_data.hpp"

Right_triangle::Right_triangle() {
    C = 90;
    name = "Прямоугольный треугольник";
}

Right_triangle::Right_triangle (int a, int b, int c, int A, int B, int C) {
    name = "Прямоугольный треугольник";
    if (C == 90) {
        this->a = a; this->b = b; this->c = c;
        this->A = A; this->B = B; this->C = C;
    } else {
        throw Wrong_data("Ошибка создания прямоугольного треугольника. Причина: угол С не равен 90");
    }
}
