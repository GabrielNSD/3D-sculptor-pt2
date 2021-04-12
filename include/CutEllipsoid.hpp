#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

/** @brief 
 * Apaga o volume de um elipsóide no espaço
 */
class CutEllipsoid : public FiguraGeometrica
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
     * Apaga o volume de um elipsóide no espaço
     * 
     * @param xcenter coordenada do centro do elipsóide no eixo x
     * @param ycenter coordenada do centro do elipsóide no eixo y
     * @param zcenter coordenada do centro do elipsóide no eixo z
     * @param rx maior distância entre o centro do elipsóide e extremidade da forma geométrica, no eixo x
     * @param ry maior distância entre o centro do elipsóide e extremidade da forma geométrica, no eixo y
     * @param rz maior distância entre o centro do elipsóide e extremidade da forma geométrica, no eixo y
     * 
     */
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    ~CutEllipsoid() {}
    void draw(Sculptor &s);
};