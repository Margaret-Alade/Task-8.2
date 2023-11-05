//
//  isosceles_triangle.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "isosceles_triangle.hpp"
#include "wrong_data.hpp"

Isosceles_triangle::Isosceles_triangle() {
    name = "Равнобедренный треугольник";
}

Isosceles_triangle::Isosceles_triangle (int a, int b, int c, int A, int B, int C) {
    name = "Равнобедренный треугольник";
    if (a == c) {
        this->a = a; this->b = b; this->c = c;
    } else {
        throw Wrong_data("Ошибка создания равнобедренного треугольника. Причина: стороны a и c не равны");
    }
    
    if (A == C) {
        this->A = A; this->B = B; this->C = C;
    } else {
        throw Wrong_data("Ошибка создания равнобедренного треугольника. Причина: углы A и C не равны");
    }
    
}
