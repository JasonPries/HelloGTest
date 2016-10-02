//
// Created by Jason on 10/1/2016.
//

#include "Line.hpp"

double_t Line::y(const double_t x) const {
    return (m * x + b);
}