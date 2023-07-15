#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x,hi,lo,mid,target;cin>>n>>target;
    vector<int> v;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    hi=n-1;lo=0;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(v[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(v[lo]==target){
        cout<<lo<<endl;
    }
    else if(v[hi]==target){
        cout<<hi<<endl;
    }
    else{
        cout<<"TARGET NOT FOUND"<<endl;
    }





}