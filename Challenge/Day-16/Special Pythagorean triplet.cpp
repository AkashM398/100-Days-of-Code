#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        std::cin >> n;
        long long product = -1;
        for(int a = 1; a <= n / 3; a++)
        {
            int b = (n * n - 2 * n * a)/(2 * n - 2 * a);
            int c = n - a - b;
            if(a * a + b * b == c * c)
            {
                if(a * b * c > product) 
                    product = a * b * c;
            }
        }
        std::cout << product << std::endl;
    }
    return 0;
}