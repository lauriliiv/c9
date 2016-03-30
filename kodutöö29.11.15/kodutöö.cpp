#include <iostream> 
#include <fstream> 
#include <vector>

using namespace std; 
#include "product.h" 


int main() {
	vector<product*> productlist; 

	// failist laadimine algus
	ifstream fileload;
	fileload.open("list.txt"); // faili avamine
	string name; 
	string number;
	while(fileload >> name >> number){ 
		product *newproduct=new product(name,number); 
		productlist.push_back(newproduct); 
	}
	fileload.close(); 
	// end fail

	// menu 
	string option;
	while(option.compare("quit")){
		cout << "enter command (insert, delete, print, quit): ";
		cin >> option;
		cout << endl; 
		if(!(option.compare("insert"))){
			string name;
			string number;
			cout << endl << "Enter product name: ";
			cin >> name;
			cout << endl << "Enter product number: ";
			cin >> number;
			product *newproduct=new product(name,number); // tekitan uue asja
			productlist.push_back(newproduct); // panen asja kasti
			cout << "New product entered successfully" << endl;
		}else if(!(option.compare("delete"))){
			int id;
			cout << "Delete product id: ";
			cin >> id;
			id=id-1; 
			productlist.erase(productlist.begin()+id); 
		}else if(!(option.compare("print"))){
			for(int i=0;i<productlist.size();i++){
				cout << "id " << i+1 << " name " << productlist[i]->getname() << " number " << productlist[i]->getnumber() << endl; 
			}
		}
	}
	// menu end

	//save all objects to file
	ofstream filesave;
	filesave.open("list.txt");
	for(int i=0;i<productlist.size();i++){
		filesave << productlist[i]->getname() << " " <<productlist[i]->getnumber() << endl;
	}
	filesave.close(); // save/quit
    //end save
	return 0;
}
