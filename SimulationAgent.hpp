/*!
* \file    SimulationAgent.hpp
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

#ifndef SimulationAgent_hpp
#define SimulationAgent_hpp

#include <vector>

class Process; // déclaration avancée

class SimulationAgent
{
    public :
    SimulationAgent();
    void initializationOfSimulation();
    void runSimulation();
    ~SimulationAgent();
    
    private :
    std::vector<Process*> m_simulation;
    
};

#endif /* SimulationAgent_hpp */
