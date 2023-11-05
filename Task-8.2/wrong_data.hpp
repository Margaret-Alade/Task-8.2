//
//  wrong_data.hpp
//  Task-8.2
//
//  Created by Маргарет  on 05.11.2023.
//

#pragma once
#include <iostream>
#include "figure.hpp"

class Wrong_data : public std::exception {
public:

Wrong_data(const std::string& e);

};

