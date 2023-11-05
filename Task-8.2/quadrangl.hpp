//
//  quadrangl.hpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#pragma once
#include "figure.hpp"

class Quadrangl : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrangl();
    Quadrangl(int a, int b, int c, int d, int A, int B, int C, int D);
    void print_info() override;
};
