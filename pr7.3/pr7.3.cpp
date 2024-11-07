#include <iostream>

int main() {
    setlocale(0, "ru");
    int n;        
    double S = 0; 
    int i = 1;    

   
    std::cout << "Введите натуральное число n (n >= 1): ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Число n должно быть натуральным и больше или равно 1." << std::endl;
        return 1; 
    }

    do {
        S += static_cast<double>(i) / 2; 
        i++; 
    } while (i <= n); 

    std::cout << "S = " << S << std::endl;

    return 0;
}
