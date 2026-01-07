#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, c;
    double delta, x1, x2, real_part, imaginary_part;

    cout <<"Enter a, b, c: "<<endl;
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    cout << "This is your quadratic equation: " << a << "x^2 + " << b <<"x + " << c << " = 0"<< endl;

    delta = b * b - 4 * a * c;
    cout << "delta = " << delta << endl;

    if(delta == 0){
        x1 = x2 = -b / (2.0 * a);
        cout << "One real root:" << endl;
        cout << "x = " << x1 << endl;
    }

    else if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        cout << "Two real roots:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else{
       
        real_part = -b/(2*a);
        imaginary_part = sqrt(-delta)/(2*a);
        cout << "Complex roots:" << endl;
        cout << "x1 = " << real_part << " + " << imaginary_part << "i" << endl;
        cout << "x2 = " << real_part << " - " << imaginary_part << "i" << endl;
    }

    return 0;
}