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
using namespace std; 

class State : public Process
{
	
	public: 
	
	State();
	
	void put(int val); //recoit la valeur depuis Phenomenon et la stocke.
	
	private: 
	
	double m_init_state;
	double m_final_state;
	double m_phen_factor;
	double m_ctrl_factor;
	double m_phen_val; 
	
	
};


#endif /* State_hpp */



