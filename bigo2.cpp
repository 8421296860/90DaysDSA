#include<bits/stdc++.h>
//#include<windows.h>
using namespace std;
int main(){
    int arr[1000],sum=0;
    for(int i=0;i<1000;i++){
        arr[i]=i;
    }
    //int ini=time(1000);
    for(int i=0;i<1000;i++){
        sum+=arr[i];
    }
    cout<<sum;
}