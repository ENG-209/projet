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


State::State(Controller* controller, Phenomenon* phenomenon) : Process(), m_initState(0), m_phenFactor(10), m_ctrlFactor(20) 
{
	
	m_valPhen = getValPhen_state(); 
	
	m_valCtrl = getValCtrl(); 


}

//void State::put (double valPhenRecieved)     //ici, on est dans une méthode de state, donc on peut accéder à touts ses attributs
//{ 
//	m_valPhen = valPhenRecieved; 
//}
	
	
void State :: put_state (double valState)
{
	
	p_controller->put_state(valState);

}
	
double State :: getValCtrl () //on aura besoin d'utiliser cette fonction 
{
	double m_valCtrl = p_controller->getValCtrl();
	
	return m_valCtrl;     
	
}

double State :: getValPhen_state ()
{
	
	double ValPhen_recieved = p_phenomenon->getValPhen_state();
	
	return ValPhen_recieved;
		
}

double State::calcul_finalState()
{
	
	m_finalState = m_initState + (m_valPhen - m_initState)*m_phenFactor + (m_valCtrl - m_initState)*m_ctrlFactor;
	
	return m_finalState;

}














#endif /* Server_hpp */
