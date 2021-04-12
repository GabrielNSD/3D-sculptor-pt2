#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"


/** @brief
 * 
 * Posiciona um Voxel no espaço, de acordo com as coordenadas e cores 
 * 
 */
class PutVoxel : public FiguraGeometrica
{
    int x, y, z;

public:

    /** @brief
     * 
     * 
     * @param x coordenada do Voxel no eixo x
     * @param y coordenada do Voxel no eixo y
     * @param z coordenada do Voxel no eixo z
     * @param r valor de vermelhor (rgba)
     * @param g valor de verde (rgba)
     * @param b valor de azul (rgba)
     * @param a transparência (rgba)
     */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    ~PutVoxel() {}
    void draw(Sculptor &s);
};