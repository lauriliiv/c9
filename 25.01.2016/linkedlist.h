#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "opilane.h"
#include <string>

class OpilaneList{
  private:
    Opilane *head;
    int hetkeID;
  public:
  //konstruktor
    OpilaneList(){
        head = NULL;
        hetkeID = 0;
    }
    //isempty kontrollibk as nimekiri on tühi
    bool isEmpty(){
        if(head == NULL) {
            return true;
        }
        else {
            return false;
        }
        
    }
    //sisestab opilasi nimekirja
    bool lisaOpilane(std::string nimi,std::string isikukood);
    //kustutab antud ID-ga õpilase
    bool eemaldaOpilane(int ID);
    
    
    //õpilase info printimine
    void prindiNimekiri();
    //destructor
    ~OpilaneList(){
        
    }
};

void OpilaneList::prindiNimekiri(){
    Opilane *hetkel = head;
    while(hetkel != NULL){
        hetkel->getInfo();
        hetkel = hetkel->pNext;
    }
}

bool OpilaneList::lisaOpilane(std::string nimi,std::string isikukood){
    if(isikukood.length() == 11){
        //opilase loomine
        Opilane *temp = new Opilane(hetkeID,nimi,isikukood);
        hetkeID++;
        //nimekirja sisestamine
        if(! isEmpty()){
            Opilane *hetkel = head;
            while(hetkel != NULL){
                
                if(hetkel->pNext == NULL){
                    hetkel->pNext = temp;
                    break;
                }
                hetkel = hetkel->pNext;
            }
        }
        else{
            head = temp;
        }
        
        return true;
    }
    else{
        return false;
    }
}


bool OpilaneList::eemaldaOpilane(int ID){
    Opilane *hetkel = head;
    if(hetkel->getID() == ID){
        head = head->pNext; 
        delete(hetkel);
        return true;
    }
    //hetkel = head->pNext;
    while(hetkel->pNext != NULL){
        if(hetkel->pNext->getID() == ID){
        Opilane *jargmine = hetkel->pNext;
        hetkel->pNext = hetkel->pNext->pNext;
        delete(jargmine);
        return true;
        }
        hetkel = hetkel->pNext;
    }
    return false;
 }

#endif