// conversions


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binarytodecimal(int n){
    int ans = 0;
    int x = 1;

    while(n > 0){
        int y = n %10; 
        ans += y*x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octaltodecimal(int n){
    int ans = 0;
    int x = 1;

    while(n > 0){
        int y = n %10;
        ans += y*x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexatodecimal(string s){

    int ans = 0;
    int x = 1;

    int len = s.size();
    for(int i=len-1; i>=0; i--){
        if(s[i] >= '0' && s[i]<= '9') ans += x*(s[i]-'0');
        else if(s[i] >= 'A' && s[i]<= 'F') ans += x*(s[i]-'A' + 10);
    }
    x *= 16;
    return ans;
}


int decimaltobinary(int n){
    int x = 1;
    int ans = 0;
    while( x <= n) x *= 2;
    x /= 2;

    while(x>0){
        int lastDigit = n / x;
        n -= lastDigit*x;
        x/= 2;
        ans = ans*10 + lastDigit;
    }
    return ans; 
}

int main(){

    int  n;
    cin>> n;
    
    string s;
    cin>> s;

    cout<<binarytodecimal(n)<<endl;
    cout<<octaltodecimal(n)<<endl;

    cout<<hexatodecimal(s)<<endl;

}