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


SimulationAgent::SimulationAgent()
{}

void SimulationAgent::initializationOfSimulation(std::vector<Process*> &environment)
{
    // faire le modificateur de tableau
    // changer les parametres des fonctions de SimAgent
    // XML : // iphen, icont, n : nb tic, val min de phen, val max de phen
    // ajouter tinyXML
    // server : suj-obs et ecriture dans txt
    
    for ( int i(0); i < environment.size()-1; i+=3)
    {
        m_simulation.push_back(environment[i+1]);
        m_simulation.push_back(environment[i]);
        m_simulation.push_back(environment[i+2]);
    }
    
    m_simulation.push_back(environment[environment.size()]);
    
    
}

void SimulationAgent::runSimulation()
{
    for ( int i(0); i < m_simulation.size(); i++)
    {
        m_simulation[i]->run();
    }
}
