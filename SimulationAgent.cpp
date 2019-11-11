/*!
* \file    SimulationAgent.cpp
*
* \brief   .
*
*
* \authors  Sharma, Torchet,
*                Esha, Tristan,
*                esha.sharma@epfl.ch
*                tristan.torchet@epfl.ch
*
* \date     28/10/2019
*/

#include "SimulationAgent.hpp"

#include "Phenomenon.hpp"
#include "State.hpp"
#include "Controller.hpp"
#include "Server.hpp"


void SimulationAgent::initializationOfSimulation(int nbProcess)
{
    
    vector<Process*> simulation(nbProcess);
    
    for ( int i(0); i < nbProcess*3-1; i+=3)
    {
        simulation[i] = new Phenomenon();
        simulation[i+1] = new State();
        simulation[i+2] = new Controller();
    }
    
    simulation[nbProcess*3-1] = new Server();
}
