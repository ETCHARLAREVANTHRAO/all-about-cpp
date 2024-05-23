// Switch statements are alternate for long if else statements
// multiple language robot

#include<iostream>
using namespace std;

int main(){

    char lang;
    cout<<"Input any characer: ";
    cin>>lang;

    switch(lang){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Namesta"<<endl;
            break;
        case 'c':
            cout<<"Namaskaram"<<endl;
            break;
        case 'd':
            cout<<"Hola"<<endl;
            break;
        default:
            cout<<"Sorry! I am still learning";
    }
    

    return 0;
}