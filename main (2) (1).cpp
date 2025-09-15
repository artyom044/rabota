#include <cstdio> // для ввода-вывода (scanf, printf)
#include <cmath> // для математических функций (pow, sqrt, sin)
#include <limits> // для получения специальных значений (NaN)

void format(double r) {
    if (std::isnan(r)) // Проверяет является ли r не числом Если да — выводит nan.
        printf("nan\n");
    else if (std::isinf(r)) // Проверяет является ли r бесконечностью (положительной или отрицательной).
        printf("%s\n", r > 0 ? "inf" : "-inf");
    else // Если число обычное  выводит его в стандартном формате %f.
        printf("%f\n", r);
}

int main() {
    double x, y, e;
    scanf("%lf %lf %lf", &x, &y, &e); // вводим три числа
    double z = e;
    double denom = y + pow(z, 2) / (y - x); // вычисляем знаменатель pow для возведения числа в степень.
    double f;
    if (denom == 0)
        f = std::numeric_limits<double>::quiet_NaN();
    else
        f = pow(x, y) + sqrt(fabs(x)) + pow(e, y) - (-pow(z,3)*pow(sin(y),2))/denom; // основная формула
    format(f);  // вывод результата
    return 0;
}