/*
 * Bai tap: Lab1_Bai3_TheTich
 * Yeu cau: Nhap canh khoi lap phuong. Tinh va xuat the tich.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1. Khai bao bien
    double canh;
    double theTich;

    // 2. Nhap du lieu
    cout << "Nhap canh cua khoi lap phuong: ";
    cin >> canh;

    // 3. Tinh toan
    theTich = pow(canh, 3); 

    // 4. Xuat ket qua
    cout << "\n---------------------------------" << endl;
    cout << "The tich cua khoi lap phuong la: " << theTich << endl;
    
    return 0;
}