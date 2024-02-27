//maximum of three numbers

#include<iostream>
using namespace std;

int main(){
int a, b, c;

cin>>a>>b>>c;

    if (a > b){
        if(a > c){
            cout<<"The larger number is "<<a;
        }
        else{
            cout<<"The larger number is "<<c;
        }}
    else if(b > a){
        if(b > c){
            cout<<"The larger number is "<<b;

        }
        else{
            cout<<"The larger number is "<<c;
        }}
    else{
        cout<<"the larger number is "<<c;
    }
    
}