  //give the user a menu
    char selection;
    do
    {
        cout << "Product Menu\n";
        cout << "============\n";
        cout << "1.insert\n";
        cout << "2.delete\n";
        cout << "3.print\n";
        cout << "4.info\n";
        cout << "\n";
        cout << "5.quit\n";
        cout << "============\n";
        cout << "Enter your selection: ";
        cin >> selection;
        cout << endl;
    
        switch (selection)
        {
            case '1':
                cout << "insert\n";
                cout << "\n";
                break;

            case '2':
                cout << "delete\n";
                cout << "\n";
                break;
            case '3':
                cout << "print\n" ;
                cout << "\n";
                break;

            case '4':
                cout << "info\n";
                cout << "\n";
                break;
            
            case '5':
                cout << "quit\n";
                cout << "\n";
                break;   
            
            default: cout <<selection << "is not a valid menu item.\n";

                cout << endl;
       }        
        
    }while (selection != 5 );

    return 0;
}
        

  
 
    string option;
    while(!(option.compare("quit"))){
        cout << "enter command (insert,delete,print,info,quit): ";
        cin >> option;
        cout << endl;
        if(option.compare("print")){
            for(int i = 0;i<productList.size();i++){
                cout << i+1 <<": ";
                productList[i]->getInfo();
                cout << endl;
            }
        }else if(option.compare("insert")){
            string name, number;
            cout << endl << "Enter product name: ";
            cin >> name;
            cout << endl << "Enter product number: ";
            cin >> number;
            Product *newProduct = new Product(name,number);
            productList.push_back(newProduct);
            cout << "New product entered successfully" << endl;
        }else if(option.compare("delete")){
            //ask for a number
            productList.
        }else if(option.compare("info")){

            int number;
            while(number < productList.size() && number > 0){
                cout << endl << "Enter product number(index): ";
                cin >> number;
            }
            productList[number-1]->getInfo(); 
        }
        
    }
    //end menu
    }while (selection != 5 );

    return 0;
    
    
    //save all objects to file
    //end save
    cout<<"Do you wish to save your current progress?(Y/N)";
      cin>>choice;
      if (choice=='Y')
      {
             string save;
             cout<<"Enter the name of the file in which you want to save your progress: \n";
             cin>>save;
             ofstream fout((save+".save").c_str(), ios::binary);
             
             }
} 