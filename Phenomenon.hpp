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
	
	virtual void run();
	
	private: 
	
	void put_valPhen_State(double valPhen);  // méthode qui sert à envoyer m_val_phen à State. 
	
	State* p_state;  
	double m_minVal; 
	double m_maxVal;
	double m_valPhen; 
	

	
};


#endif /* Phenomenon_hpp */



