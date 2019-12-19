#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,temp=0,prev,m;
    cin>>n;
    string s[n],sum;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=49;i>=0;i--){
        for(int j=0;j<n;j++){
            prev+=(s[j][i]-'0');
        }
        prev+=temp;
        m=prev%10;
        sum+=(m+'0');
        temp=prev/10;
        prev=0;
    }
    if(temp!=0){
        while(temp!=0){
            m=temp%10;
            sum+=(m+'0');
            temp/=10;
        }
    }
    reverse(sum.begin(),sum.end());
    for(int i=0;i<10;i++){
        cout<<sum[i];
    }
    cout<<endl;
    return 0;
}