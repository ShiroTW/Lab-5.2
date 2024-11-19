#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void FindSum(const double x, const double eps, int& n, double& S);
void GetA(const double x, const int n, double& a);

int main()
{
    double xp, xk, x, dx, eps, S = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(6) << "x" << "  |"
        << setw(10) << "e^(-x)" << " |"
        << setw(7) << "S" << "    |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-----------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        FindSum(x, eps, n, S);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << exp(-x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-----------------------------------------" << endl;
    return 0;
}

void FindSum(const double x, const double eps, int& n, double& S)
{
    n = 0;
    double a = 1;
    S = a;
    do {
        n++;
        GetA(x, n, a);
        S += a;
    } while (abs(a) >= eps);
}

void GetA(const double x, const int n, double& a)
{
    a *= -x / n;
}