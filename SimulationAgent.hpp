//
//  SimulationAgent.hpp
//  Projet
//
//  Created by Tristan Torchet on 28/10/2019.
//  Copyright © 2019 Tristan Torchet. All rights reserved.
//

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
