#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
map<int,string>imap;
void call()
{
imap.insert(pair<int,string>(0," Zero"));
imap.insert(pair<int,string>(1," One"));
imap.insert(pair<int,string>(2," Two"));
imap.insert(pair<int,string>(3," Three"));
imap.insert(pair<int,string>(4," Four"));
imap.insert(pair<int,string>(5," Five"));
imap.insert(pair<int,string>(6," Six"));
imap.insert(pair<int,string>(7," Seven"));
imap.insert(pair<int,string>(8," Eight"));
imap.insert(pair<int,string>(9," Nine"));
imap.insert(pair<int,string>(10," Ten"));
imap.insert(pair<int,string>(11," Eleven"));
imap.insert(pair<int,string>(12," Twelve"));
imap.insert(pair<int,string>(13," Thirteen"));
imap.insert(pair<int,string>(14," Fourteen"));
imap.insert(pair<int,string>(15," Fifteen"));
imap.insert(pair<int,string>(16," Sixteen"));
imap.insert(pair<int,string>(17," Seventeen"));
imap.insert(pair<int,string>(18," Eighteen"));
imap.insert(pair<int,string>(19," Nineteen"));
imap.insert(pair<int,string>(20," Twenty"));
imap.insert(pair<int,string>(30," Thirty"));
imap.insert(pair<int,string>(40," Forty"));
imap.insert(pair<int,string>(50," Fifty"));
imap.insert(pair<int,string>(60," Sixty"));
imap.insert(pair<int,string>(70," Seventy"));
imap.insert(pair<int,string>(80," Eighty"));
imap.insert(pair<int,string>(90," Ninety"));
imap.insert(pair<int,string>(100," Hundered"));
}       

string smallpart(int n)
{
    string ans="";
    if(n==0)
        return "";
    if(n>=1 && n<=9)
        return imap[n];
    if(n>=100 && n<=999)
    {
        ans=imap[n/100]+" Hundred";
        n=n%100;
    }
    if(n>=10 && n<=99)
    {
        if(n<=19 || n%10==0)
            return ans+imap[n];
        else
            return ans+imap[(n/10)*10]+""+imap[n%10];
    }
    if(n>=1 && n<=9)
        ans=ans + imap[n];
    return ans;
}
int main() 
{
    int t;
    cin>>t;
    call();
    while(t--)
    {
        long long int harbaar=1000000000000;
        string str,one_1,two_2,three_3,four_4,ans="";
        cin>>str;
        long long int n=stoll(str);
        if(n==0)
            ans=imap[0];
        if(n==1000000000000)
            ans=" One Trillion";
        str="000000000000"+str;
        //cout<<str<<endl;
        one_1=str.substr(str.length()-3,3);
        two_2=str.substr(str.length()-6,3);
        three_3=str.substr(str.length()-9,3);
        four_4=str.substr(str.length()-12,3);
        int one   =stoi(one_1);
        int two   =stoi(two_2);
        int three =stoi(three_3);
        int four  =stoi(four_4);        
        //cout <<one<<" "<<two<<" "<<three<<" "<<four<<endl;
        four_4=smallpart(four);
        if(four_4!="")
            ans=ans+four_4+" Billion";
        three_3=smallpart(three);
        if(three_3!="")
            ans=ans+three_3+" Million";
        two_2=smallpart(two);
        if(two_2!="")
            ans=ans+two_2+" Thousand";
        one_1=smallpart(one);
        if(one_1!="")
            ans=ans+one_1;
        cout<<ans.substr(1)<<endl;
    }
    return 0;
}