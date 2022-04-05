#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Name Please! :";
    char name[10];
    cin >> name;

    cout << "Name :" << name;
    cout << "Length :" << strlen(name);
}
