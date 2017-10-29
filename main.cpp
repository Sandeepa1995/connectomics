#include <iostream>
#include <math.h>
#include <string>
#include <time.h>

bool isPrime(int n){
    if (n<=1){
        return false;
    }
    else if (n==2){
        return true;
    }
    else if (n%2==0){
        return false;
    }
    else {
        for (int a = 3; a < sqrt(n)+1; a = a + 1) {
            if (n%a==0){
                return false;
            }
        }
    }
    return true;
}

int main() {
    clock_t clkStart;
    clock_t clkFinish;

    int num;
    int cnt=0;
    std::cin >> num;
    clkStart = clock();
    for (int a = 2; a < num; a = a + 1) {
        if (isPrime(a)){
            cnt=cnt+1;
        }
    }
    std::cout << std::to_string(cnt) << std::endl;
    clkFinish = clock();
    std::cout << clkFinish - clkStart;

    return 0;
}

