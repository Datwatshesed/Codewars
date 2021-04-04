#include <iostream>

typedef unsigned long long ull;

class SumFct
{
  public:
    static ull perimeter(int n) {

        int total = 0;
        int sum = 0;
        int a = 0;
        int b = 1;
        int all_nums[n + 1];
        
        for (int i; i <= n; i++) {
            a = b;
            b = total;
            total = a + b;
            all_nums[i] = total;
        }

        for (int i; i < sizeof(all_nums) / sizeof(int); i++) {
            sum += all_nums[i] * 4;
        }

        return sum;
    };
};

int main() {

    SumFct thing;
    std::cout << thing.perimeter(5) << std::endl;

    return 0;
}