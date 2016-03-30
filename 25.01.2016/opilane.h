#ifndef OPILANE_H
#define OPILANE_H
#include <iostream>

class Opilane{
  private:
    int ID;
    std::string nimi;
    std::string isikukood;
  public:
    Opilane *pNext;
    Opilane(){};
    Opilane(int ID, std::string nimi, std::string isikukood){
        this->ID = ID;
        this->nimi = nimi;
        this->isikukood = isikukood;
        pNext = NULL;
    };
    ~Opilane(){};
    
    std::string getName(){
        return nimi;
    }
    int getID(){
      return ID;
    }
    void getInfo(){
        std::cout <<"ID: "<< ID<<" Nimi: "<< nimi <<" isikukood: " << isikukood<<std::endl; 
    };
};

#endif