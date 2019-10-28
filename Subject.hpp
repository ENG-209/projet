//
//  Subject.hpp
//  Projet
//
//  Created by Tristan Torchet on 28/10/2019.
//  Copyright © 2019 Tristan Torchet. All rights reserved.
//

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

    protected:
       Subject(std::string name) : name_(name), observers_(0) {} //constructeur

    private:
       std::string name_;                // nom du sujet
       std::list<Observer*> observers_;  // liste des observateurs

};  // class Subject

#endif /* Subject_hpp */
