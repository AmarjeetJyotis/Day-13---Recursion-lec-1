#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    int ans=fibonacci(n);
    cout<<"Fibonacci value is: "<<ans<<endl;
return 0;
}