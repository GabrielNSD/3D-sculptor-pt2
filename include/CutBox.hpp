#pragma once
#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

/** @brief
* 
* Apaga uma caixa no espaço com dimensões x0 a x1, y0 a y1 e z0 a z1
*/
class CutBox : public FiguraGeometrica
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
     * 
     * 
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~CutBox() {}
    void draw(Sculptor &s);
};