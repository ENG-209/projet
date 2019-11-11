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

#ifndef Server_hpp
#define Server_hpp

#include <iostream>
#include "Phenomenon.hpp" 
#include "Controller.hpp"
#include "Process.hpp"
#include "State.hpp"

Phenomenon ::Phenomenon(State* state):Process(), p_state(state), m_minVal(0), m_maxVal(100)
{
	
}

void Phenomenon::put_valPhen_State(double valPhen) 
{
	
	p_state->put_valPhen_State(valPhen);   
}


#endif /* Phenomenon_hpp */
