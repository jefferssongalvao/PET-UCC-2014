#include <iostream>

long long fib(int n) {
    long long fib1 = 1, fib2 = 1, soma;
    for(int i = 3; i <= n; i++) {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    return fib2;
}

int main() {
    long long tmp;
    int n, m;
    while(std::cin >> n >> m) {
        tmp = fib( fib( n ) );
        std::cout << tmp % m << std::endl;
    }
    return 0;
}
