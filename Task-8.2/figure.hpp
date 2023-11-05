//
//  figure.hpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#pragma once
#include <iostream>
#include <string>

class Figure {
protected:
    std::string name;
public:
    Figure();
    virtual void print_info();
};
