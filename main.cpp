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

#include "Phenomenon.hpp"
#include "State.hpp"
#include "Controller.hpp"
#include "Server.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
    
    int nbTic = 1; //sera remplacé par le XML
    
    vector<Process*> environment;
    
    for ( int i(0); i < nbTic; i++)
    {
        environment.push_back(new State());
        environment.push_back(new Phenomenon(environment[environment.size()-1]));
        environment.push_back(new Controller());
    }
    
    environment.push_back(new Server());
   
    SimulationAgent SimulationAgent;
    
    SimulationAgent.initializationOfSimulation(environment);
    
    SimulationAgent.runSimulation();

    return 0;
}




