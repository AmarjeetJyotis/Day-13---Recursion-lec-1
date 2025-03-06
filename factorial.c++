#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"value n: "<<endl;
    cin>>n;

    int ans=factorial(n);
    cout<<"Factorial is: "<<ans<<endl;
return 0;
}