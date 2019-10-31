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

#include"Process.h"
#include <iostream>
using namespace std;

class State : public Process
{

public:


private:

   double m_i_phen;
   double m_i_ctrl;
};


#endif /* State_hpp */



