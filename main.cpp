/*!
* \file    main.cpp
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


using namespace std;

int main(int argc, const char * argv[]) {
    
    int nbProcess(1);
    int sizeSimulation(nbProcess*3 + 1); //sera remplacé par la methode XML
   
    SimulationAgent SimulationAgent(sizeSimulation);
    
    SimulationAgent.initializationOfSimulation();
    
    SimulationAgent.runSimulation();
    
    
    
    

    
    // iphen, icont, n : nb tic, val min de phen, val max de phen 
    
    
    

    return 0;
}




