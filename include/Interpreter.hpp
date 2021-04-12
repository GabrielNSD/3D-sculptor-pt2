#pragma once

#include <vector>
#include <string>

#include "FiguraGeometrica.hpp"

class Interpreter
{
    int dimx;
    int dimy;
    int dimz;
    float r, g, b, a;

public:
    Interpreter();

    int getDimx();

    int getDimy();

    int getDimz();

    std::vector<FiguraGeometrica *> parse(std::string filename);
};