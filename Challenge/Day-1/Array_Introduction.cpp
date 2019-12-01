#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[1000],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }  
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}