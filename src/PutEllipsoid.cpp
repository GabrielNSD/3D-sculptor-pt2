#include "PutEllipsoid.hpp"
#include <cmath>

#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutEllipsoid::draw(Sculptor &s)
{
    s.setColor(r, g, b, a);

    int i,j, k;

    if (xcenter - rx < 0)
    {
        i = 0;
    }
    else
    {
        i = xcenter - rx;
    }

    if (ycenter - ry < 0)
    {
        j = 0;
    }
    else
    {
        j = ycenter - ry;
    }
    
    if (zcenter - rz < 0)
    {
        k = 0;
    }
    else
    {
        k = zcenter - rz;
    }



    for (int x = i; x < (xcenter + rx); x++)
    {
        for (int y = j; y < (ycenter + ry); y++)
        {
            for (int z = k; z < (zcenter + rz); z++)
            {
                if (((pow((x - xcenter), 2) / pow(rx, 2)) + (pow((y - ycenter), 2) / pow(ry, 2)) + (pow((z - zcenter), 2) / pow(rz, 2))) <= 1)
                {

                    s.putVoxel(x, y, z);
                }
            }
        }
    }
}