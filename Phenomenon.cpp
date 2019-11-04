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
#include "Process.hpp"
#include "State.hpp"

Phenomenon ::Phenomenon(State* state):Process(), m_min_val(0), m_max_val(100)
{
	
}

void Phenomenon::put(int val)
{
	
	p_state->put(val);
}



#endif /* Phenomenon_hpp */
