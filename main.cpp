#include <iostream> 
#include <math.h>
#include <conio.h>

double Square(double a, double b, double c) {
    int p = (a + b + c) / 2;
    int s = sqrt(p*(p - a)*(p - b)*(p - c)); 
 
    return s;
}
 
 
int main() {
    double a, b, c;
 
    std::cout << "Угол a: ";
    std::cin >> a;
 
    std::cout << "Угол b: ";
    std::cin >> b;
 
    std::cout << "Угол c: ";
    std::cin >> c;
 
    std::cout << "Площадь угла = " << Square(a, b, c);
    return 0;
}