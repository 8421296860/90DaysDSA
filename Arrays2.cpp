#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[50];
    int num=0;
   int j=100;
    for(int i=0;i<50;i++){
        arr[i]=j;
        j--;
    }
    for(int i=0;i<50;i++){
        //arr[i+1]=max(arr[i],arr[i+1]);
        cout<<" "<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<50;i++){
        swap(arr[i],arr[i+1]);
    }
    //num=max(50,60);
    //cout<<num;
    for(int i=0;i<50;i++){
        //arr[i+1]=max(arr[i],arr[i+1]);
        cout<<" "<<arr[i];
    }
}
