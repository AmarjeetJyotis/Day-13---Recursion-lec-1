#include<iostream>
using namespace std;

void printcountin(int n){
    if(n==0){
        return ;
    }
    // processing 
    cout<<n<<" ";

    // Recursively call   
    printcountin(n-1);
}

int main(){
    int n;
    cout<<"value of n: "<<endl;
    cin>>n;
    printcountin(n);
    cout<<endl;
return 0;
}