/*!
* \file    main.cpp
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

#include <iostream> 
#include "Server.hpp" 


void Server::run()
{
    // ecrit dans le fichier txt
}

void Server:: update (Subject* subject, std :: string message)
{
	
	std::cout << "Update" << this->name() << ":"<< message << std::endl; //this ?? 
	
	m_valPhen_server = subject->get_ValPhen(); 
	
	m_initState_server = InitState; 
	
	m_ctrlVal_server = CtrlVal; 
	
	// ??pk est ce qu'on prend le pointeur sur sujet??
}




