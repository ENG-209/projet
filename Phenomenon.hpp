/*!
* \file    Phenomenon.hpp
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

#ifndef Phenomenon_hpp
#define Phenomenon_hpp

#include <iostream> 
#include "Process.hpp"
#include "State.hpp"



class State;
class Controller; 

class Phenomenon: public Process
{
	
	public: 
	
	Phenomenon(State* state);
	
	//double getValPhen_state(); /// NON.PAS PERMIS. 
	
	void run();
	
	private: 
	
	void put_ValPhen_State(double valPhen);  // méthode qui sert à envoyer m_val_phen à State.
	
	//void put_ValPhen_controller();
	
	
	// Controller* p_controller;  /// NON.PAS PERMIS.
	
	//pointeur sur State qui nous permet de put "ValPhen" dans State 
	
	State* p_state;  ///  OK, PERMIS.
	double m_minVal; 
	double m_maxVal;
	double m_valPhen; //génère val-phen
	

	
};


#endif /* Phenomenon_hpp */



