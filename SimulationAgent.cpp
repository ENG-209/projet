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

SimulationAgent::SimulationAgent()
{}

void SimulationAgent::initializationOfSimulation(int sizeSimulation)
{
    
    vector<Process*> simulation(sizeSimulation);
    
    for ( int i(0); i < sizeSimulation-1; i+=3)
    {
        simulation[i] = new Phenomenon();
        simulation[i+1] = new State();
        simulation[i+2] = new Controller();
    }
    
    simulation[sizeSimulation-1] = new Server();
}

void SimulationAgent::runSimulation(int sizeSimulation)
{
    for ( int i(0); i < sizeSimulation; i++)
    {
        simulation[i]->run();
    }
}
