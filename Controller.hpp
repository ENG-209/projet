/*!
* \file    Controller.hpp
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

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "Process.hpp"
#include "Subject.hpp"
#include "State.hpp"
using namespace std;

class State; 

class Controller : public Process, public Subject 
{

public:

Controller(std :: string name): Process(), Subject(name), name_(name), m_ctrlVal(10), m_satVal(100)
{

}
    
    virtual void run();

double calculValCtrl (double valSat, double valPhen); //calcule la ValCtrl

virtual ~Controller()  //destructeur 
{

}


private:

	State* p_State; 
	
	std :: string name_;
   double m_ctrlVal;
   double m_satVal;
   double m_initState;
   double m_valPhen;
   
   double get_valPhen_State();  //lis valPhen depuis State avec un pointeur sur State (le controlleur est l'initiateur)
   
   double get_initState_State();  // lis initState depuis State avec un pointeur sur State (le controlleur est l'initiateur)
   
   void put_valCtrl_State(double valCtrl);  //mets ValCtrl dans State avec un pointeur sur State (le controlleur est l'initiateur)

};

#endif /* Controller_hpp */
