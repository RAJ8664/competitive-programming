#include<bits/stdc++.h>
using namespace std;
bool cantake(vector<int> &weights, int d,int weight){
    int days=1,load=0;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i]>weight){
            days++;
            load=weights[i];

        }
        else{
            load+=weights[i];

        }
    }
    return days<=d;

   
}



int leastWeightCapacity(vector<int> &weights, int d)
{
    int hi,lo,mid;
    hi=accumulate(weights.begin(),weights.end(),0);
    lo=*max_element(weights.begin(),weights.end());
    while (hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(cantake(weights,d,mid)){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
        
    }
    if(cantake(weights,d,lo)){
        cout<<lo<<endl;
    }
    else{
        cout<<hi<<endl;
    }

    
}



int main(){
    int n,d;
    cin>>n>>d;
    vector<int> weights(n);
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    leastWeightCapacity(weights, d);


}