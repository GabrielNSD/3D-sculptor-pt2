#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

/** @brief
 * Cria um elipsóide no espaço
 * 
 */
class PutEllipsoid : public FiguraGeometrica
{

    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;

public:
    /** @brief
     * 
     * Cria um elipsóide no espaço
     * 
     * @param xcenter coordenada do centro do elipsóide no eixo x
     * @param ycenter coordenada do centro do elipsóide no eixo y
     * @param zcenter coordenada do centro do elipsóide no eixo z
     * @param rx maior distância entre o centro do elipsóide e extremidade da forma geométrica, no eixo x
     * @param ry maior distância entre o centro do elipsóide e extremidade da forma geométrica, no eixo y
     * @param rz maior distância entre o centro do elipsóide e extremidade da forma geométrica, no eixo y
     * @param r valor de vermelhor (rgba)
     * @param g valor de verde (rgba)
     * @param b valor de azul (rgba)
     * @param a transparência (rgba)
     */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    ~PutEllipsoid() {}
    void draw(Sculptor &s);
};