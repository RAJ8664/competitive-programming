#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
long long m,n;
long long v[N];


bool issuff(long long h){
    long long wood=0;
    int i;
    for(i=0;i<n;i++){
        if(v[i]>=h){
            wood+=v[i]-h;
        }
    }
    return wood>=m;


}


int main(){
    cin>>n>>m;
    long long hi,lo,mid, i;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    hi=1e9;lo=0;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(issuff(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(issuff(hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }









}