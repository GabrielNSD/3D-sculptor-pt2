#include "Interpreter.hpp"

#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

#include "FiguraGeometrica.hpp"
#include "PutVoxel.hpp"
#include "CutVoxel.hpp"
#include "PutBox.hpp"
#include "CutBox.hpp"
#include "PutSphere.hpp"
#include "CutSphere.hpp"
#include "PutEllipsoid.hpp"
#include "CutEllipsoid.hpp"

using namespace std;

Interpreter::Interpreter()
{
}

int Interpreter::getDimx()
{
    return dimx;
}

int Interpreter::getDimy()
{
    return dimy;
}

int Interpreter::getDimz()
{
    return dimz;
}

std::vector<FiguraGeometrica *> Interpreter::parse(std::string filename)
{
    std::vector<FiguraGeometrica *> figs;
    std::ifstream fin;
    std::string s;
    std::stringstream ss;

    fin.open(filename);
    if (!fin.is_open())
    {
        exit(0);
    }

    while (std::getline(fin, s))
    {
        ss.clear();
        ss.str(s);
        ss >> s;
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return std::tolower(c); });

        if (s.compare("dim") == 0)
        {
            ss >> dimx >> dimy >> dimz;
        }

        else if (s.compare("putvoxel") == 0)
        {
            int x, y, z;
            ss >> x >> y >> z >> r >> g >> b >> a;
            figs.push_back(new PutVoxel(x, y, z, r, g, b, a));
        }

        else if (s.compare("cutvoxel") == 0)
        {
            int x, y, z;
            ss >> x >> y >> z;
            figs.push_back(new CutVoxel(x, y, z));
        }

        else if (s.compare("putbox") == 0)
        {
            int x0, x1, y0, y1, z0, z1;
            ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
        }

        else if (s.compare("cutbox") == 0)
        {
            int x0, x1, y0, y1, z0, z1;
            ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
        }

        else if (s.compare("putsphere") == 0)
        {
            int x, y, z, radius;
            ss >> x >> y >> z >> radius >> r >> g >> b >> a;
            figs.push_back(new PutSphere(x, y, z, radius, r, g, b, a));
        }

        else if (s.compare("cutsphere") == 0)
        {
            int x, y, z, radius;
            ss >> x >> y >> z >> radius;
            figs.push_back(new CutSphere(x, y, z, radius));
        }

        else if (s.compare("putellipsoid") == 0)
        {
            int xcenter, ycenter, zcenter, rx, ry, rz;
            ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
            figs.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
        }

        else if (s.compare("cutellipsoid") == 0)
        {
            int xcenter, ycenter, zcenter, rx, ry, rz;
            ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
            figs.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
        }
    }
    fin.close();

    return (figs);
}