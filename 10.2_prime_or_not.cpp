// Whether a number is prime or not
// Prime number are those who have factors itself or 1
// Logic if n is divisible by any i-> n is non prime



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    for (i=2; i<n; i++){
        if (n % i == 0){
            cout<<"Not a prime number";
            break;
        }
    }
    if(i == n)
        cout<<"Is a prime number"<<endl;

    return 0;
}