//
//  quadrangl.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "quadrangl.hpp"
#include "wrong_data.hpp"
Quadrangl::Quadrangl() {
    name = "Четырехугольник";
    a = 0; b = 0; c = 0; d = 0;
    A = 0; B = 0; C = 0; D = 0;
}

Quadrangl::Quadrangl(int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Четырехугольник";
    if (A + B + C + D == 360) {
        this->a = a; this->b = b; this->c = c; this->d = d;
        this->A = A; this->B = B; this->C = C; this->D = D;
    } else {
        throw Wrong_data("Ошибка создания четырехугольника. Причина: сумма углов не равна 360");
    }
}

void Quadrangl::print_info() {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C  << ", " << D << ") создан\n";
}
