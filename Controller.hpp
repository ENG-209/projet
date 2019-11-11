/*!
* \file    Controller.hpp
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

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "Process.hpp"
#include "Subject.hpp"
using namespace std;

class Controller : public Process, public Subject 
{

public:

Controller(std :: string name): Process(), Subject(name), name_(name), m_ctrlVal(10), m_satVal(100)
{

}

void put_state(double valState); 

double calculValCtrl (double valSat, double valPhen);

double getValCtrl();

double get_ValPhen();
//void put_ValPhen_controller(double ValPhen);

virtual ~Controller()  //destructeur 
{

}

void run();


private:

   std :: string name_;
   double m_ctrlVal;
   double m_satVal;
   double m_initState;
   double m_valPhen; //il lui faut la valPhen pour calculer la valeur de controle 

};

#endif /* Controller_hpp */
