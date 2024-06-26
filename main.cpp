/**
 * Copyright (C) 2024 Lehigh University.
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 *
 * Author: David Rutkowski (dmr518@lehigh.edu)
 */

#include "Simulation.h"

int main(int argc, char* argv[])
{
    Simulation sim = Simulation();
    
    if(argc == 1)
    {
        // setup simulation parameters (temperature, nsteps, timestep, input files, output file, etc.)
        cout << "Reading input file" << endl;
        sim.readParameterFile("input.txt");
    }
    else
    {
        cout << "Reading " << argv[1] << endl;
        sim.readParameterFile(argv[1]);
    }
    
    // run simulation
    sim.run();
    
    return 0;
}