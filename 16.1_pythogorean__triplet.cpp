// Find whether it is pythogorean triplet


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pythogores(int x, int y, int z){
    int b, c;
    int a = max(x, max(y, z));

    if (a == x){
        b = y;
        c = z;
    }
    else if( a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if (a*a == b*b + c*c) return true;
    else return false;
}

int main(){

    int x, y, z;
    cin >> x >>y >> z;

    if(pythogores(x,y, z)) cout<<"It is a pythongores triplet";
    else cout<<"Not a pythogoreous triplet";

    return 0;
}