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


double Controller :: get_valPhen_State()
{
	
	double val = p_State->get_valPhen_State();
	
	return val;
	
}

double Controller :: get_initState_State()
{
	
	double val = p_State->get_initState_State();
	
	return val;
}

void Controller:: put_valCtrl_State(double valCtrl)
{
	p_State->put_valCtrl_State(valCtrl);
	
}


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


void Controller:: run(){
	
	
	// fait son truc 
	///avoir ValPhen ?
	///avoir initState ?
	///calculer valCtrl
	m_ctrlVal = calculValCtrl(m_satVal, m_valPhen);
	///transmettre valCtrl à State

	std :: cout << name_ <<":"<< std::endl;
	
	notify( "message");   //on est dans le mode push donc c'est le controlleur qui va notifier le serveur. 
    
    // recupere les valeurs ValPhen et initStat
    // les envoies a server
    // calcul valcontrol en fonction de ValPhen
    // l'envoie a State
}


#endif /* Controller_cpp */
