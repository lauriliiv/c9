#include <iostream>
using namespace std;

int main(){ 
    int massiiv[10] = {12,3,34,11,9,54,100,65,2,28}
    int vahe=0;
    for(int j=0; j<9; j++){
        for(int i=0; i<9;i++){
            if(massiiv[i]>masiiv[i+1]){
            vahe=masiiv[i];
            massiiv[i]=massiiv[i+1];
            massiiv[i+1]=vahe;
        
                
            }
        }
        
    }
    for(int i=0; i<10;i++){
        cout<<massiiv[i]<<"";
    }
}    