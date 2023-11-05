//
//  figure.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "figure.hpp"

Figure::Figure() {
    name = "Фигура";
}
void Figure::print_info() {
    std::cout << name << ": \n";
}
