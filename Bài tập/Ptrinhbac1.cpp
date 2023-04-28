#include<iostream>
using namespace std;

int main() {

    float a, b;

    cout << "Chao mung den voi phuong trinh bac 1" << endl;
    cout << "Nhap a= ";
    cin >> a;
    cout << "Nhap b= ";
    cin >> b;

    double x = -b/a;

    if ( a == 0 && b == 0 ) {
        cout << "Phuong trinh vo so nghiem" << endl;
    } else if ( a == 0 && b != 0 ) {
        cout << "Phuong trinh vo nghiem" << endl;
    } else {
        cout << "Phuong trinh co nghiem la: " << x << endl;
    }
}
