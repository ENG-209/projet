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


SimulationAgent::SimulationAgent(int sizeSimulation) : m_sizeSimulation(sizeSimulation)
{}

void SimulationAgent::initializationOfSimulation()
{
    // faire le modificateur de tableau
    // changer les parametres des fonctions de SimAgent
    // XML : // iphen, icont, n : nb tic, val min de phen, val max de phen
    // ajouter tinyXML
    // server : suj-obs et ecriture dans txt
    
}

void SimulationAgent::runSimulation()
{
    for ( int i(0); i < m_sizeSimulation; i++)
    {
        m_simulation[i]->run();
    }
}
