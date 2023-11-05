//
//  wrong_data.cpp
//  Task-8.2
//
//  Created by Маргарет  on 05.11.2023.
//

#include "wrong_data.hpp"

Wrong_data::Wrong_data(const std::string& e) {
  throw std::domain_error(e);
}
