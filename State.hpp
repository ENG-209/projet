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

class Phenomenon;
class Controller; 

class State : public Process
{
	
	public: 
	
	State(double phenFactor, double ctrlFactor);  //constructeur
    
    virtual void run(); // calcul le nouvel etat
	
	void calcul_finalState(); //calcul de l'état final
	
	void put_valPhen_State(double valPhenRecieved); //Phenomenon met ValPhen dans State (State est la cible)
	
	double get_valPhen_State(); //Controlleur lis la ValPhen depuis State avec un pointeur sur State (State est la cible)
	
	double get_initState_State();  //Controlleur lis la valeur de initState avec un pointeur sur State(State est la cible)
	
	void put_valCtrl_State(double valCtrl); //Controlleur met la ValCtrl dans State avec un pointeur sur State (State est la cible)
	
	
	private: 
	
	double m_initState;  //OK
	double m_finalState; //OK
	double m_phenFactor; //OK?
	double m_ctrlFactor; //OK?
	double m_valPhen;    ///OK (transmise)
	double m_valCtrl;    ///OK (transmise)

};


#endif /* State_hpp */



