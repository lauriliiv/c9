#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream iFile;
    iFile.open("output.txt");
    int arv = 0;
    
    while(iFile >> arv){
        
        
        cout << arv << " ";
    }
    iFile.close();
}    