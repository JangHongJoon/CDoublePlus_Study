#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char password[11];
    char tryArray[11];
    cout << "Enter Password For Safety : ";
    cin >> password;
    
    cout << "Enter Password For Exit >> " << endl;
    while (true){
        cout << "\tEnter Password : " ;
        cin >> tryArray;
        
        if (!strcmp(password, tryArray)){
            cout << "Exit!" << endl;
            break;
        }
        else {
            cout << "Exit Denied" << endl;
        }
    }
}