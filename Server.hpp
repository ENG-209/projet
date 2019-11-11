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

#include "Observer.hpp"
#include "Process.hpp"

#include <iostream> 

class Controller;  //déclaration avancée 

class Server : public Observer , public Process {
	
	public: 
	
	Server (std:: string name) : Observer(name)
	{
	
	}
    
    virtual void run();
	 
	virtual ~Server()  //?? 
	{
		
	}
	
	virtual void update(Subject* subject, std:: string message, double ValPhen, double InitState, double CtrlVal);
	
	private: 
	
	double m_valPhen_server;
	double m_initState_server;
	double m_ctrlVal_server; 	
	
};



#endif /* Server_hpp */
