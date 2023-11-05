//
//  triangle.hpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#pragma once
#include "figure.hpp"

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;
public:
    Triangle();

    Triangle(int a, int b, int c, int A, int B, int C);

    void print_info() override;
};
