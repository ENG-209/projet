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

Phenomenon ::Phenomenon(State* state):Process(), m_minVal(0), m_maxVal(100)
{
	
}

void Phenomenon::put(double valPhen) /// OK. PERMIS.
{
	
	p_state->put(m_valPhen);   
}


/// NON.PAS PERMIS. 

//void Phenomenon :: put_ValPhen_controller()
{
	//il faut là un moyen pour pouvoir appeller une fonction publique d'une autre classe dans cette classe -> pointeur sur controlleur !!
	
	//p_controller->put_ValPhen_controller(m_valPhen);
	
//}
	
	
double Phenomenon::getValPhen_state()
{
	
	return m_valPhen; 
}
	
	
	
	
	
	
	
	
	
	

#endif /* Phenomenon_hpp */
