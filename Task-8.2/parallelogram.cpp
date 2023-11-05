//
//  parallelogram.cpp
//  Task-8.2
//
//  Created by Маргарет  on 05.11.2023.
//

#include "parallelogram.hpp"
#include "wrong_data.hpp"

Parallelogram::Parallelogram() {
    name = "Параллелограм";
}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Параллелограм";
    if (a == c && b == d) {
        this->a = a; this->b = b; this->c = c; this->d = d;
    } else {
        throw Wrong_data("Ошибка создания параллелограма. Причина: стороны a,c и b,d попарно не равны");
    }
    if (A == C && B == D) {
        this->A = A; this->B = B; this->C = C; this->D = D;
    } else {
        throw Wrong_data("Ошибка создания параллелограма. Причина:  углы A,C и B,D попарно не равны");
    }
}
