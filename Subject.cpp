/*!
* \file    Subject.cpp
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

#include "Subject.hpp"

#include <iostream>

void Subject::attach(Observer* obs)
{
    std::cout << "Attach " << obs->name()  << " to " << this->name_ << std::endl;
    observers_.push_back(obs);
}

void Subject::detach(Observer* obs)
{
    std::cout << "Detach " << obs->name() << " from " << this->name_ << std::endl;
    observers_.remove(obs);
}

void Subject::notify(std::string message)
{
    for (auto it = observers_.begin(); it != observers_.end(); ++it)
    {
        std::cout << "Notify " << (*it)->name()  << std::endl;
        (*it)->update(this, message);
    }
}
