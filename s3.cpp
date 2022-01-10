#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <array> // allows for array functions.



using namespace std;

string s3type(char a)
{
    switch (a)
    {
    case 'a':
    case 'A':
        return "Ice";
        break;
    case 'b':
    case 'B':
        return "Milk";
        break;
    case 'C':
    case 'c':
        return "Black";
        break;
    }
}

string s3drink(char b)
{
    if ((b = 'A')||(b = 'a'))
    {
        return "Coffee";
    }
    else
    {
        return "Tea";
    }
    
}

string s3sugar(char yesno)
{
    
    switch (yesno)
    {
    case 'y':
    case 'Y':
        return "with extra sugar";
        break;
    case 'n':
    case 'N':
        return "without extra sugar";
        break;
    }
    
}

int s3price(char c)
{
    switch (c)
    {
    case 'a':
    case 'A':
        return 3;
        break;
    case 'b':
    case 'B':
        return 2;
        break;
    case 'C':
    case 'c':
        return 1;
        break;
    }
}

int main()
{
    bool end = true;
    while(end){
    system("CLS");
     string menu[4][4] = {

        {"Coffee", "          Price (AED)", "    Tea", "          Price (AED)"},
        {"Ice Coffee", "      3", "              Ice Tea", "      3"},
        {"Milk Coffee", "     2", "              Milk Tea", "     2"},
        {"Black Coffee", "    1", "              Black Tea", "    1"}
    };

    for(int i = 0; i<4; i++){
        for(int j = 0; j <4; j++){
            cout << menu[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\n\nPlease insert amount of coins or cash (Minimum: 3 AED): ";
    double wallet;
    cin >> wallet;
    while(cin.fail()){
         
        cout <<"Error: invalid amount.\n ";
        cout << "\n\nPlease insert amount of coins or cash: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> wallet;
    }
    while(wallet<3){
          
        cout <<"Error: Minimum: 3 AED.\n ";
        cout << "\n\nPlease insert amount of coins or cash: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> wallet;
    }

    bool wrongOrder = true;
    while (wrongOrder)
    {
     system("CLS");   
     string menu2[4][4] = {

        {"Coffee", "          Price (AED)", "    Tea", "          Price (AED)"},
        {"Ice Coffee", "      3", "              Ice Tea", "      3"},
        {"Milk Coffee", "     2", "              Milk Tea", "     2"},
        {"Black Coffee", "    1", "              Black Tea", "    1"}
    };

    for(int i = 0; i<4; i++){
        for(int j = 0; j <4; j++){
            cout << menu2[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\nBALANCE: "<<wallet<<" AED"<<endl;
    cout<<"\nA.Coffee\nB.Tea";
    cout<< "\nPlease select the drink of your choice: ";
    
    char drink;
    cin >>drink;
    while((!(tolower(drink) == 'a'))&&(!(tolower(drink) == 'b'))){
         
        cout <<"Error: invalid selection.\n ";
        cout<< "\nPlease select the drink of your choice: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> drink;
    }
    cout<<"\nA.Ice\nB.Milk\nC.Black";
    cout<< "\nPlease select the drink type of your choice: ";
    char type;
    cin >>type;
    while((!(tolower(type) == 'a'))&&(!(tolower(type) == 'b'))&&(!(tolower(type) == 'c'))){
         
        cout <<"Error: invalid selection.\n ";
        cout<< "\nPlease select the drink type of your choice: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> type;
    }
 
    cout <<"\nWould you like to have some sugar?"<<endl;
    cout<<"Y/N: ";
    char sugar;
    cin>>sugar;
    while((!(tolower(sugar) == 'y'))&&(!(tolower(sugar) == 'n'))){
         
        cout <<"Error: kindly input Y or N: ";
    

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> sugar;
    }
    
    

    cout << "\n\nYou have selected: "<< s3type(type) <<" "<< s3drink(drink) <<" "<<s3sugar(sugar)<< ". That would be: "<< s3price(type)<<" AED"<<".\nProceed?";
    cout<<"\nY/N: ";
    char userInput;
    cin >> userInput;
    while((!(tolower(userInput) == 'y'))&&(!(tolower(userInput) == 'n'))){
         
        cout <<"Error: kindly input Y or N: ";
    

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> userInput;
    }
    switch (userInput)
    {
    case 'y':
    case 'Y':
        wrongOrder = !true;
        break;
    }
    cout<< "Your change is: "<< wallet - s3price(type) <<" AED.";
    }
    
    cout<<"\nWould you like to make another order?";
    cout<<"\nY/N:";
    char newOrder;
    cin >> newOrder;
    while((!(tolower(newOrder) == 'y'))&&(!(tolower(newOrder) == 'n'))){
         
        cout <<"Error: kindly input Y or N: ";
    

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> newOrder;
    }
    switch (newOrder)
    {
    case 'N':
    case 'n':
        end = !true;
        system("CLS");
        cout<<"Thank you for using this vending machine.";
        break;
    }
    
    
    
    
    }

    
    




   

    return 0;
}
