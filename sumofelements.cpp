#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getSum(int arr[],int size){

    if (size==0){
        return 0;
    }
    if (size==1){
        return arr[0];

    }

    int rearr=getSum(arr+1,size-1);
    int sum=arr[0]+rearr;
    return sum;
}

int main(){
    int arr[5]={1,4,6,7,8};
    int size=5;
    int ans=getSum(arr,size);
    cout<<ans<<endl;
}