#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sum(int n){
    int ans = 0;
    for(int i=1; i<=n; i++) ans+=i;
    return ans;
}
int sum2(int n){
    return (n*(n+1))/2;
}


int main(){

    int n;
    cin >> n;

    cout<< sum(n)<<endl;
    cout<<sum2(n)<<endl;

    return 0;
}