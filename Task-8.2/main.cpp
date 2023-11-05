//
//  main.cpp
//  Task-8.2
//
//  Created by Маргарет  on 03.11.2023.
//

#include "right_triangle.hpp"
#include "isosceles_triangle.hpp"
#include "equal_triangle.hpp"
#include "square.hpp"
#include "rhomb.hpp"



void print_info(Figure* figure) {
    figure->print_info();
}

int main() {
    
    try {
        Triangle triangle {10, 20, 30, 40, 60, 70};
        print_info(&triangle);
      } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
      }
    try {
        Right_triangle right_triangle{ 10, 20, 30, 40, 50, 80};
        print_info(&right_triangle);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
    try {
        Isosceles_triangle isosceles_triangle{10, 20, 10, 50, 80, 50};
        print_info(&isosceles_triangle);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
    try {
        Equal_triangle equal_triangle{10, 10, 10, 60, 60, 30};
        print_info(&equal_triangle);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
    try {
        Quadrangl quadrangl{10, 20, 30, 40, 50, 60, 70, 80};
        print_info(&quadrangl);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
    try {
        Restangle restangle{10, 20, 10, 20, 90, 90, 90, 90};
        print_info(&restangle);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
    
    try {
        Square square{10, 10, 20, 10, 90, 80, 90, 90};
        print_info(&square);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
    try {
       Parallelogram parallelogram{10, 20, 10, 20, 100, 80, 100, 80};
        print_info(&parallelogram);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }
        
    try {
        Rhomb rhomb{30, 30, 30, 30, 100, 80, 60, 120};
        print_info(&rhomb);
    } catch (std::domain_error& e) {
        std::cout << e.what() << '\n';
    }


    return 0;
}
