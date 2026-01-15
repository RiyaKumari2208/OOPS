#include <iostream>
using namespace std;

class Polynomial {
private:
    int degree;
    int coeff[100]; 

public:
    
    Polynomial(int deg = 0) {
        degree = deg;
        for (int i = 0; i <= degree; i++)
            coeff[i] = 0;
    }

    void input() {
        cout << "Enter coefficients from highest degree to constant term:\n";
        for (int i = degree; i >= 0; i--) {
            cout << "Coefficient of x^" << i << ": ";
            cin >> coeff[i];
        }
    }

    void display() const {
        for (int i = degree; i >= 0; i--) {
            cout << coeff[i];
            if (i > 0)
                cout << "x^" << i << " + ";
        }
        cout << endl;
    }

    Polynomial add(const Polynomial &p) const {
        int maxDeg = (degree > p.degree) ? degree : p.degree;
        Polynomial result(maxDeg);

        for (int i = 0; i <= maxDeg; i++) {
            int a = (i <= degree) ? coeff[i] : 0;
            int b = (i <= p.degree) ? p.coeff[i] : 0;
            result.coeff[i] = a + b;
        }
        return result;
    }
};

int main() {
    int deg1, deg2;

    cout << "Enter degree of first polynomial: ";
    cin >> deg1;
    Polynomial p1(deg1);
    p1.input();

    cout << "\nEnter degree of second polynomial: ";
    cin >> deg2;
    Polynomial p2(deg2);
    p2.input();

    cout << "\nFirst Polynomial: ";
    p1.display();

    cout << "Second Polynomial: ";
    p2.display();

    Polynomial sum = p1.add(p2);
    cout << "Sum of Polynomials: ";
    sum.display();

    return 0;
}
