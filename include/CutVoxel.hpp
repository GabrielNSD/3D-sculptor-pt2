#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

/** @brief
     * 
     * Remove um Voxel do espaço, de acordo com as coordenadas fornecidas
     */

class CutVoxel : public FiguraGeometrica
{
    int x, y, z;

public:
    /** @brief
     * 
     * @param x coordenada do Voxel no eixo x
     * @param y coordenada do Voxel no eixo y
     * @param z coordenada do Voxel no eixo z
     */
    
    CutVoxel(int x, int y, int z);
    ~CutVoxel() {}
    void draw(Sculptor &s);
};