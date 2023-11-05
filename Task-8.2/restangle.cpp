//
//  restangle.cpp
//  Task-8.2
//
//  Created by Маргарет  on 05.11.2023.
//

#include "restangle.hpp"
#include "wrong_data.hpp"
Restangle::Restangle() {
    A = 90; B = A; C = A; D = A;
    name = "Прямоугольник";
}

Restangle::Restangle (int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Прямоугольник";
    if (a == c && b == d) {
        this->a = a; this->b = b; this->c = c; this->d = d;
    } else {
        throw Wrong_data("Ошибка создания прямоугольника. Причина: стороны a,c и b,d попарно не равны");
    }
    
    if (A == 90 && B == 90 && C == 90 && D == 90) {
        this->A = A; this->B = B; this->C = C; this->D = D;
    } else {
        throw Wrong_data("Ошибка создания прямоугольника. Причина: все углы не равны 90)");
    }
}
