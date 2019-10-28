//
//  SimulationAgent.hpp
//  Projet
//
//  Created by Tristan Torchet on 28/10/2019.
//  Copyright © 2019 Tristan Torchet. All rights reserved.
//

#ifndef SimulationAgent_hpp
#define SimulationAgent_hpp

#include "Process.h"

class SimulationAgent
{
    public :
    SimulationAgent();
    void initializationOfSimulation();
    void runSimulation();
    ~SimulationAgent();
    
    private :
    vector<Process*> m_simulation;
    
};

#endif /* SimulationAgent_hpp */
