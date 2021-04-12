#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

/** @brief
     * 
     * Apaga um volume esférico no espaço
     */
class CutSphere : public FiguraGeometrica
{
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;

public:
    /** @brief
     * 
     * @param xcenter coordenada do centro da esfera no eixo x
     * @param ycenter coordenada do centro da esfera no eixo y
     * @param zcenter coordenada do centro da esfera no eixo z
     * @param radius raio da esfera
     * 
     */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    ~CutSphere() {}
    void draw(Sculptor &S);
};