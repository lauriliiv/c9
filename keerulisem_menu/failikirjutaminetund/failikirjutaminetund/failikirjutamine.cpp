#include <iostream>
#include <fstream>
#include <cstdlib> //#include >stdlib.h>
using namespace std;


int main(){
    ofstream oFile;
    oFile.open("output.txt");
    int kokku, max;   
    int arv = 0;
    
    cout <<"Sisesta, kui palju arve vaja on:" <<endl;
    cin >> kokku;
    cout <<"Sisesta kõige suurem arv" <<endl;
    cin >> max;
    for(int i=0; i < kokku; i++){
        arv=rand() % max+1;
        oFile  << arv << " ";
        
    }
    oFile.close();
}    