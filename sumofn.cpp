//for loops sum of n numbers
// We use the for loop generally when we know exactly when to stop

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum = 0;
    for(int counter = 1; counter <= n; counter++){
        sum = sum + counter;
    }
    cout<<sum;
    
    return 0;
}
