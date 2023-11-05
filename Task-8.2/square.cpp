//
//  square.cpp
//  Task-8.2
//
//  Created by Маргарет  on 05.11.2023.
//

#include "square.hpp"
#include "wrong_data.hpp"

Square::Square() {
    name = "Квадрат";
}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Квадрат";
    if (b == a && c == a && d == a) {
        this->a = a; this->b = b; this->c = c; this->d = d;
    } else {
        throw Wrong_data("Ошибка создания квадрата. Причина: все стороны не равны");
    }
    
    if (A == 90 && B == 90 && C == 90 && D == 90) {
        this->A = A; this->B = B; this->C = C; this->D = D;
    } else {
        throw Wrong_data("Ошибка создания квадрата. Причина: все углы не равны 90)");
    }
}
