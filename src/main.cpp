#include <iostream>
#include <cmath>
#include "Sculptor.hpp"
#include "PutVoxel.hpp"
#include <vector>

#include "CutVoxel.hpp"
#include "PutBox.hpp"
#include "CutBox.hpp"
#include "PutSphere.hpp"
#include "CutSphere.hpp"
#include "PutEllipsoid.hpp"
#include "CutEllipsoid.hpp"

#include "Interpreter.hpp"

int main()
{


    Sculptor *s1;

    Interpreter parser;
    std::vector<FiguraGeometrica *> figs;

    figs = parser.parse((char *)"teste.txt");

    s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

    for (size_t i = 0; i < figs.size(); i++)
    {
        figs[i]->draw(*s1);
    }

    s1->limpaVoxels();

    s1->writeOFF((char *)"testeP2.off");

    for (size_t i = 0; i < figs.size(); i++)
    {
        delete figs[i];
    }

    delete s1;
}