/*!
* \file    Subject.hpp
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

#ifndef Subject_hpp
#define Subject_hpp

#include "Observer.hpp"

#include <string>
#include <list>

class Subject
{
    public:
      virtual ~Subject() {} //destructeur

      // attache un observateur au sujet
      void attach(Observer* obs);

      // détache un observateur du sujet
      void detach(Observer* obs);

      // notifie tous les observateurs attachés d'un changement par un message
      
      void notify(std::string message);
      
      virtual double get_ValPhen() = 0;

    protected:
       Subject(std::string name) : name_(name), observers_(0) {} //constructeur

    private:
       std::string name_;                // nom du sujet
       std::list<Observer*> observers_;  // liste des observateurs (taille non spécifiée)
       
       ///vu qu'on a qu'un observateur, je propose un seul pointeur sur observateur (donc serveur)
       
       

};  // class Subject

#endif /* Subject_hpp */
