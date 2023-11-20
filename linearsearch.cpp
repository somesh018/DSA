#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPresent(int arr[],int size,int k){

    if (size==0){
        return false;
    }
    if (arr[0]==k){
        return true;
    }
    else{
        return isPresent(arr+1,size-1, k);
    }
}

int main(){
    int arr[5]={1,4,6,7,8};
    int size=5;
    int k=9;
    bool ans=isPresent(arr,size,k);
    cout<<ans<<endl;
}

