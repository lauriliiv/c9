##include <iostream>
#include <cstring>

int main(){
    char *sona = new char; //4byte
    *sona = 'c';
    char *sona2= (char*)malloc(sizeof(char)*10);
    strcpy(sona2,"mina");
    
    int **matrix = (int**)malloc(sizeof(int*)*10);
    for(int i = 0; i < 10; i++){
        matrix[i] = (int*)malloc(sizeof(int*)*10);
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            *matrix + j = i*j;
        }
    }
    for(int i = 0; i < 10; i++){
        //for(int j = 0; j < 10; j++){
            std:: cout << *matrix[i]<<std::endl;
        }
    
    std::cout << sona2;
}