/*!
* \file    Observer.hpp
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

#ifndef Observer_hpp
#define Observer_hpp

#include <string>

class Subject;  // déclaration avancée

class Observer
{
    public:
       virtual ~Observer() {} // destructeur

       // met à jour l'état de l'observateur
       virtual void update(Subject* subject, std::string message) = 0;

       // retourne le nom de l'observateur
       std::string name() { return name_; }

    protected:
       Observer(std:: string name) : name_(name) {} // constructeur

    private:
       std::string name_;   // nom de l'observateur

};  // class Observer

#endif /* Observer_hpp */
