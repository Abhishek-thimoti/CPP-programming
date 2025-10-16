#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a;
    long long int b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e ;
    cout << a << endl << b << endl << c << endl << d << endl;
    cout << fixed << setprecision(e) << endl;
    return 0;
}