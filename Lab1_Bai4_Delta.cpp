/*
 * Bai tap: Lab1_Bai4_Delta
 * Yeu cau: Nhap a, b, c. Tinh Delta va can Delta.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1. Khai bao bien
    float a, b, c;
    float delta;

    // 2. Nhap du lieu
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    // 3. Tinh toan
    // Cong thuc: Delta = b^2 - 4ac
    delta = pow(b, 2) - 4 * a * c; 

    // 4. Xuat ket qua
    cout << "\n---------------------------------" << endl;
    cout << "Delta           : " << delta << endl;
    
    // Luu y: Can delta chi tinh duoc khi Delta >= 0
    // Neu Delta am, may se bao loi hoac hien thi "nan" (Not a Number).
    cout << "Can bac 2 Delta : " << sqrt(delta) << endl;

    return 0;
}