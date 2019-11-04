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
using namespace std;


class State;

class Phenomenon: public Process
{
	
	public: 
	
	Phenomenon(State* state); 
	
	void run();
	
	private: 
	
	void put(int val); // méthode qui sert à envoyer m_val_phen à State.
	
	State* p_state;
	double m_min_val; 
	double m_max_val;
	double m_val_phen; //génère val-phen
	

	
};


#endif /* Phenomenon_hpp */



