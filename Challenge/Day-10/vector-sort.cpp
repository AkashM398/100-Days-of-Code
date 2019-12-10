#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

int size;
cin >> size;
vector<long long int>myVector(size);
for(int i =0; i < size; i ++){
    cin >> myVector[i];
}

sort(myVector.begin(), myVector.end());

for(auto x:myVector)
    cout << x << " ";

return 0;
}