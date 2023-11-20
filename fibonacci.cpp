#include<iostream>

using namespace std;

int fibo(int n){
    int a=0;
    int b=1;
    int 
    int c;

    for (int j=2; j<=n; j++){
        c=a+b;
        a=b;
        b=c;
    }
    
    return c;
}

int main(){
    int n ;
    cin>>n;

    int ans = fibo(n);
    cout<<ans<<endl;
}
