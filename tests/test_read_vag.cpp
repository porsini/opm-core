/*===========================================================================
//
// File: test_read_vag.cpp
//
// Created: 2012-06-08 15:44:43+0200
//
// Authors: Knut-Andreas Lie      <Knut-Andreas.Lie@sintef.no>
//          Halvor M. Nilsen      <HalvorMoll.Nilsen@sintef.no>
//          Atgeirr F. Rasmussen  <atgeirr@sintef.no>
//          Xavier Raynaud        <Xavier.Raynaud@sintef.no>
//          Bård Skaflestad       <Bard.Skaflestad@sintef.no>
//
//==========================================================================*/


/*
  Copyright 2012 SINTEF ICT, Applied Mathematics.
  Copyright 2012 Statoil ASA.

  This file is part of the Open Porous Media Project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <opm/core/vag_format/vag.hpp>
//#include "../config.h"
/* test reading of vag grid format */
int main(int argc, char** argv)
{
    using namespace std;
    using namespace OPM;
    std::string filename;
    if (argc == 2) {
	filename = argv[1];
    } else {
	std::cout << "\nUsage: test_read_vag  filename\n";
	exit( 1 );
    }
    ifstream is(filename.c_str());//"/home/hnil/heim/SVN/simmatlab/projects/clastic/utils/unstructuredgrids/data/3x3_w_layered-vag.dat");
    //ifstream is("/home/hnil/heim/SVN/simmatlab/projects/clastic/utils/unstructuredgrids/data/test.txt");
    //std::ofstream is("");
    VAG vag_grid;
    readVagGrid(is,vag_grid);
}
