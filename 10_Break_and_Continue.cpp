// Break and Control Statements
// These Statements are used to control the flow of loops on meeting some specified condition

// Program to neha can go out on odd days and pocketmondy should not be zero

#include<iostream>
using namespace std;

int main(){
    int pocketmoney = 3000;
    for(int date = 1; date <= 30; date++){
        if(date % 2 == 0){
            continue;
        }
        if(pocketmoney == 0){break;}
        cout<<"Go out today"<<endl;
        pocketmoney = pocketmoney = 300;
    } 
    return 0;
}
// Continue statement is used to skip to the interation of the loop
// Break is used to terminate the loop
