#include <iostream>
#include <cstdio>
using namespace std;
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int ans;
    if(a>b&&a>c&&a>d){
        ans=a;
    }
    else if(b>a&&b>c&&b>d){
        ans=b;
    }
    else if(c>a&&c>b&&c>d){
        ans=c;
    }
    else if(d>a&&d>b&&d>c){
        ans=d;
    }
    return ans;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
