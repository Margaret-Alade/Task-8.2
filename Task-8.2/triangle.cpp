//
//  triangle.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "triangle.hpp"
#include "wrong_data.hpp"

Triangle::Triangle() {
    name = "Треугольник";
    a = 0; b = 0; c = 0;
    A = 0; B = 0; C = 0;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    name = "Треугольник";
    if (A + B + C == 180) {
        this->a = a; this->b = b; this->c = c;
        this->A = A; this->B = B; this->C = C;
    } else {
        throw Wrong_data("Ошибка создания треугольника. Причина: сумма углов не равна 180");
    }
}

void Triangle::print_info() {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан\n";
}

