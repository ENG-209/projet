/*!
* \file    State.hpp
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

#ifndef State_hpp
#define State_hpp

#include <iostream> 

#include "Process.hpp"

class Phenomenon;
class Controller; 

class State : public Process
{
	
	public: 
	
	State();
	
	//void put(double valPhenRecieved); //recoit la valeur depuis Phenomenon et la stocke. (Phenomenon "put" valPhen dans controlleur
	
	double calcul_finalState();
	
	
	private: 
	
	double m_initState;  //OK
	double m_finalState; //OK
	double m_phenFactor; //OK?
	double m_ctrlFactor; //OK?
	double m_valPhen;    //OK (transmise)
	double m_valCtrl;    //OK (transmise)
	
	Controller* p_controller;
	Phenomenon* p_phenomenon;
	
	void put_state(double valState);
	
	double getValCtrl(); 
	
	double getValPhen_state();
	
	
};


#endif /* State_hpp */



