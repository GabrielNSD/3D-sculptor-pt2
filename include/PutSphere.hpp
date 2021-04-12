#pragma once
#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

/** @brief
* 
* Cria uma esfera no espaço
*/
class PutSphere : public FiguraGeometrica
{
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;

public:
    /** @brief
     * 
     * 
     * @param xcenter coordenada do centro da esfera no eixo x
     * @param ycenter coordenada do centro da esfera no eixo y
     * @param zcenter coordenada do centro da esfera no eixo z
     * @param radius raio da esfera
     * @param r valor de vermelhor (rgba)
     * @param g valor de verde (rgba)
     * @param b valor de azul (rgba)
     * @param a transparência (rgba)
     * 
     */
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    ~PutSphere() {}
    void draw(Sculptor &s);
};