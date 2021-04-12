#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

/** @brief
     * 
     * Cria uma caixa no espaço com dimensões x0 a x1, y0 a y1 e z0 a z1, e cor r,g,b,a
     * Todos os Voxels dessa geometria possuem a mesma cor
     */
class PutBox : public FiguraGeometrica
{
    int x0, x1, y0, y1, z0, z1;

public:
    /** @brief
     * 
     *  
     * @param x0 coordenada inicial da caixa no eixo x
     * @param x1 coordenada final da caixa no eixo x
     * @param y0 coordenada inicial da caixa no eixo y
     * @param y1 coordenada final da caixa no eixo y
     * @param z0 coordenada inicial da caixa no eixo z
     * @param z1 coordenada final da caixa no eixo z
     * @param r valor de vermelhor (rgba)
     * @param g valor de verde (rgba)
     * @param b valor de azul (rgba)
     * @param a transparência (rgba)
     * 
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    ~PutBox() {}
    void draw(Sculptor &s);
};