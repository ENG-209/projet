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
    
    int nbTic = 1;
    
    int sizeSimulation(nbTic*3+1); //sera remplacé par la methode XML
    
    vector<Process*> environment;
    
    for ( int i(0); i < sizeSimulation-1; i+=3)
    {
        environment[i] = new Phenomenon();
        environment[i+1] = new State();
        environment[i+2] = new Controller();
    }
    
    environment[sizeSimulation-1] = new Server();
   
    SimulationAgent SimulationAgent(sizeSimulation);
    
    SimulationAgent.initializationOfSimulation();
    
    SimulationAgent.runSimulation();

    return 0;
}




