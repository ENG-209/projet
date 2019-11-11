/*!
* \file    Controller.cpp
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

#ifndef Controller_cpp
#define Controller_cpp

#include <iostream>
#include "Controller.hpp"
using namespace std; 



void Controller :: put_state(double valState) 
{
	
	m_initState = valState; 
	
}

//void Controller :: put_ValPhen_controller(double ValPhen)
//{
	
	//m_valPhen = ValPhen; 
	
//}


double Controller :: calculValCtrl (double valSat, double valPhen)
{
	
	double ctrlVal;
	
	if (valPhen > valSat){
		
		ctrlVal = valSat;
		
	} else {
		
		ctrlVal = valPhen; 
		
	} 
	
	return ctrlVal; 
	
} 


double Controller :: getValCtrl ()
{
	
	return m_ctrlVal;
}

double Controller::get_ValPhen(){
	return m_valPhen;
}

void Controller:: run(){
	
	
	// fait son truc 
	///avoir ValPhen ?
	///avoir initState ?
	///calculer valCtrl
	m_ctrlVal = calculValCtrl(m_satVal, m_valPhen);
	///transmettre valCtrl à State

	std :: cout << name_ <<":"<< std::endl;
	
	notify( "message");   //on est dans le mode push donc c'est le controlleur qui va notifier le serveur. 

}


#endif /* Controller_cpp */
