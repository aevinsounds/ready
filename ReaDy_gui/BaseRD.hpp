/*  Copyright 2011, The Ready Bunch

    This file is part of Ready.

    Ready is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Ready is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Ready. If not, see <http://www.gnu.org/licenses/>.         */

#ifndef __BASERD__
#define __BASERD__

// abstract base classes for all reaction-diffusion systems, 2D and 3D

class BaseRD 
{
    public:

        virtual ~BaseRD() {}

        // returns 2 for 2D systems, 3 for 3D, etc.
        int GetDimensionality();

        // e.g. 2 for Gray-Scott, 1 for Schlogl
        int GetNumberOfChemicals();

        // advance the RD system by n timesteps
        virtual void Update(int n_steps)=0;

        // returns the timestep for the system
        float GetTimestep();

    protected:

        int dimensionality;
        int n_chemicals;
        float timestep;
};

#endif
