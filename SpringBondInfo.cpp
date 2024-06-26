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

#include "SpringBondInfo.h"

using namespace std;

SpringBondInfo::SpringBondInfo()
{
	k = 0.0;
	eqDist = 0.0;
}

SpringBondInfo::SpringBondInfo(double newK, double newEqDist)
{
	k = newK;
	eqDist = newEqDist;
}

double SpringBondInfo::calcForce(double dist)
{
    //positive values are compression
	return -k * (dist - eqDist);
}

double SpringBondInfo::getEqDist()
{
    return eqDist;
}