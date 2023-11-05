//
//  rhomb.cpp
//  Task-8.2
//
//  Created by Маргарет  on 05.11.2023.
//

#include "rhomb.hpp"
#include "wrong_data.hpp"

Rhomb::Rhomb() {
    name = "Ромб";
}

Rhomb::Rhomb (int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Ромб";
    if(b == a && c == a && d == a) {
        this->a = a; this->b = b; this->c = c; this->d = d;
    } else {
        throw Wrong_data("Ошибка создания ромба. Причина: все стороны не равны");
    }
    
    if (A == C && B == D) {
        this->A = A; this->B = B; this->C = C; this->D = D;
    } else {
        throw Wrong_data("Ошибка создания ромба. Причина:  углы A,C и B,D попарно не равны");
    }
}
