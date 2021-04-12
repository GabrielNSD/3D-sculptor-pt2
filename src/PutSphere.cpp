#include "PutSphere.hpp"
#include <cmath>
#include <iostream>

#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutSphere::draw(Sculptor &s)
{
    s.setColor(r, g, b, a);

    int i,j, k;

    if (xcenter - radius < 0)
    {
        i = 0;
    }
    else
    {
        i = xcenter - radius;
    }

    if (ycenter - radius < 0)
    {
        j = 0;
    }
    else
    {
        j = ycenter - radius;
    }
    
    if (zcenter - radius < 0)
    {
        k = 0;
    }
    else
    {
        k = zcenter - radius;
    }

    for (int x = i; x < (xcenter + radius); x++)
    {
        for (int y = j; y < (ycenter + radius); y++)
        {
            for (int z = k; z < (zcenter + radius); z++)
            {
                if ((pow((x - xcenter), 2) + pow((y - ycenter), 2) + pow((z - zcenter), 2)) <= (pow(radius, 2)))
                {
                    s.putVoxel(x, y, z);
                }
            }
        }
    }
}