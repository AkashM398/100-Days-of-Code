#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int factors(int num)
{   
    long long count=0;
    long pp=1;
    while(num%2==0)
    {
        count++;
        num/=2;
    }
    pp*=(count+1);
    for(long i=3;i<=sqrt(num);i+=2)
    {
        count=0;
        while(num%i==0)
        {
            count++;
            num/=i;
        }
        pp*=(count+1);
    }
    if(num>2){
        pp*=2;
    }
    
    return pp;
   
}

int main(){
    long t;
    cin>>t;
    if(t<=10)
    {
        for(int t_i = 0; t_i < t; t_i++)
        {  
            long n;
            cin>>n;
            if(n>=1 && n<=1000)
            {
                //code begins 
                long long num,sum,number=1;
                sum=(number * (number + 1)/2);
                num=factors(sum);
                while(num<=n){
                    number++;
                    sum=(number * (number + 1)/2);
                    num=factors(sum);                    
                }
                cout<<sum<<endl;
            }
        }
    }
    return 0;
    
}