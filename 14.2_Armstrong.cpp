// Armstrong number
// A number when we get from adding cubes of the digits 
// 153 is armstrong number 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int k = n;
    int ans = 0;
    int r;
    while(k != 0){
        r = k % 10;
        ans += r*r*r;
        k = k/10;
    }
    if(ans == n) cout<<"Armstrong number";
    else cout<<"Not Armstrong number";

    return 0;
}