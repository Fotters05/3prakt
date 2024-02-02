#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif

using namespace std;

double calculateCircleArea(double radius) {
    
    return M_PI * radius * radius;
}


double calculateRingArea(double outerRadius, double innerRadius) {
    double outerArea = calculateCircleArea(outerRadius);
    double innerArea = calculateCircleArea(innerRadius);
    return outerArea - innerArea;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double outerRadius, innerRadius;
    cout << "Введите внешний радиус кольца: ";
    cin >> outerRadius;
    cout << "Введите внутренний радиус кольца: ";
    cin >> innerRadius;

    if (outerRadius <= innerRadius) {
        cout << "Ошибка: Внешний радиус должен быть больше внутреннего радиуса." << std::endl;
        return 1;
    }

    double ringArea = calculateRingArea(outerRadius, innerRadius);
    cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}

