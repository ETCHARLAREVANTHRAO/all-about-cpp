//do while loop to print n numbers
// the major difference between while and do while loop is do while print atlest one time irrespective of the condition


#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    do{
        cout<<n<<endl;
        n--;
    }while(n>0);
}