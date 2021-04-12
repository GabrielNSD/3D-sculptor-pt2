#pragma once
#include "Sculptor.hpp"

class FiguraGeometrica
{
protected:
    float r, g, b, a;

public:
    //FiguraGeometrica();
    virtual void draw(Sculptor &s) = 0;
    virtual ~FiguraGeometrica();
};