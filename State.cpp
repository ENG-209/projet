/*!
* \file    Server.hpp
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
#include "Controller.hpp"
#include "Phenomenon.hpp"
#include "State.hpp" 

using namespace std; 


State::State(double phenFactor, double ctrlFactor) : Process(), m_initState(0), m_phenFactor(phenFactor), m_ctrlFactor(ctrlFactor)
{
	
	
}

void State::run()
{
    //calcul du nouvel etat;
}

void State::put_valPhen_State (double valPhenRecieved)     
{ 

	m_valPhen = valPhenRecieved; 

}


double State :: get_valPhen_State()
{
	
	return m_valPhen;
	
}

double State:: get_initState_State()
{
	
	return m_initState; 
	
}

void State :: put_valCtrl_State(double valCtrl)
{
	
	m_valCtrl = valCtrl;

}

void State::calcul_finalState()
{
	m_finalState = m_initState + (m_valPhen - m_initState)*m_phenFactor + (m_valCtrl - m_initState)*m_ctrlFactor;

}


#endif /* Server_hpp */
