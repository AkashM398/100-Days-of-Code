#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num)
{
    if(num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    for (int i = 3 ; i <= sqrt(num);)
    {
        if(num%i == 0)
            return false;
        
        i += 2;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    int n = 1;
    vector<long> vec;
    int size = vec.size();
    while(size != 10000)
    {
        
        if(isPrime(++n)){
            vec.push_back(n);
        }
        size = vec.size();
    }
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<vec[n-1]<<endl;
            
    }
    return 0;
}
