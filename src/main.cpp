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
    /*     
    
    código da primeira parte

    Sculptor teste(200, 200, 200);

    teste.setColor(255, 229, 50, 1);

    //parte iferior da alça
    teste.putSphere(80, 99, 72, 11);
    teste.putSphere(80, 100, 72, 11);
    teste.putSphere(80, 101, 72, 11);
    teste.cutSphere(80, 99, 77, 8);
    teste.cutSphere(80, 100, 77, 8);
    teste.cutSphere(80, 101, 77, 8);
    teste.cutSphere(80, 102, 77, 8);

    teste.putSphere(120, 100, 72, 11);
    teste.cutSphere(120, 100, 77, 8);

    //parte superior da alça
    teste.putSphere(77, 100, 72, 8);
    teste.putSphere(77, 99, 72, 8);
    teste.putSphere(77, 101, 72, 8);
    teste.cutSphere(77, 100, 72, 5);
    teste.cutSphere(77, 98, 72, 5);
    teste.cutSphere(77, 99, 72, 5);
    teste.cutSphere(77, 101, 72, 5);
    teste.cutSphere(77, 102, 72, 5);

    teste.putSphere(123, 100, 72, 8);
    teste.putSphere(123, 99, 72, 8);
    teste.putSphere(123, 101, 72, 8);
    teste.cutSphere(123, 100, 72, 5);
    teste.cutSphere(123, 98, 72, 5);
    teste.cutSphere(123, 99, 72, 5);
    teste.cutSphere(123, 101, 72, 5);

    //fatiar a alça
    teste.cutBox(0, 199, 0, 98, 0, 100);
    teste.cutBox(0, 199, 102, 199, 0, 100);


    //cone da base
    teste.setColor(40,90,255,0.5);
    teste.putEllipsoid(100,100,20,16,16,45);
    teste.cutEllipsoid(100, 100, 20, 15, 15, 45);
    teste.cutBox(86,115,86,115,20,60);
    teste.setColor(255, 229, 50, 1);
    teste.putEllipsoid(100, 100, 20, 15, 15, 45);
    teste.cutEllipsoid(100, 100, 20, 13, 13, 40);

    //parte superior da taça 
    teste.putSphere(100, 100, 80, 25);
    teste.cutBox(75, 126, 75, 126, 80, 106);
    teste.cutSphere(100, 100, 80, 21);
    teste.cutBox(0, 199, 0, 199, 0, 20);

    teste.setColor(255,54,54,0.5);
    teste.putEllipsoid(100,75,75,3,3,4);
    teste.putEllipsoid(100,125,75,3,3,4);


    //base
    teste.setColor(0, 0, 0, 1);
    teste.putBox(70, 130, 70, 130, 0, 20);
    teste.cutBox(71, 129, 71, 129, 1, 19);
    //plaquinha da base
    teste.setColor(255, 255, 0, 1);
    teste.putBox(90, 110, 130, 132, 5, 15);

    teste.writeOFF((char *)"trofeu.off"); */

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