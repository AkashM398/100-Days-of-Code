#include <iostream>

int main(){
    int t;
    std::cin >> t;
    
    for(int a = 0; a < t; a++){
        int n;
        int k;
        std::cin >> n >> k;
        std::string num;
        std::cin >> num;
        long max = 0;
        for (int i = 0; i < n - k; i++)
        {
            long prod = 1;
            std::string select = num.substr(i, k);
            for(auto it = select.begin(); it != select.end(); it++)
            {
                std::string s(1, *it);
                prod *= std::stoi(s);
            }
            if(prod > max)
                max = prod;
        }
        std::cout << max << std::endl;
    }
    return 0;
}