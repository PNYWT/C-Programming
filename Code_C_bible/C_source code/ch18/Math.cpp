using namespace std;

#include <iostream>

class Math {
public:
    long pow(int, int);		 // Overloading Function
    double pow(double, int); // Overloading Function	
};
long Math::pow(int a, int b) {
    long result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return result;
}
double Math::pow(double a, int b) {
    double result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return result;
}
int main() {
    Math m;
    cout << m.pow(2, 4) << endl;
    cout << m.pow(3.5, 4) << endl;
    cin.get();
    return 0;
}
