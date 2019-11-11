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

SimulationAgent::SimulationAgent(int sizeSimulation) : m_sizeSimulation(sizeSimulation)
{}

void SimulationAgent::initializationOfSimulation()
{
    
    for ( int i(0); i < m_sizeSimulation-1; i+=3)
    {
        m_simulation[i] = new Phenomenon();
        m_simulation[i+1] = new State();
        m_simulation[i+2] = new Controller();
    }
    
    m_simulation[m_sizeSimulation-1] = new Server();
}

void SimulationAgent::runSimulation()
{
    for ( int i(0); i < m_sizeSimulation; i++)
    {
        m_simulation[i]->run();
    }
}
