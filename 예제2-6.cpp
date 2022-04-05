#include <iostream>
using namespace std;

int main(){
    char address[100];

    cout << "ADDRESS : ";
    cin.getline(address, 100, '\n');

    cout << "주소는 " << address << "입니다" << endl;
}