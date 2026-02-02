/*
 * Bai tap: Lab1_Bai2_ChuviDT
 * Yeu cau: Nhap 2 canh hinh chu nhat. Tinh Chu vi, Dien tich, Canh nho.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 1. Khai bao bien
    float dai, rong;
    float chuVi, dienTich, canhNho;

    // 2. Nhap du lieu
    cout << "Nhap chieu dai: ";
    cin >> dai;
    
    cout << "Nhap chieu rong: ";
    cin >> rong;

    // 3. Tinh toan
    chuVi = (dai + rong) * 2;
    dienTich = dai * rong;
    
    // Tim canh nho nhat trong 2 canh
    canhNho = min(dai, rong); 

    // 4. Xuat ket qua ra man hinh
    cout << "\n---------------------------------" << endl;
    cout << "KET QUA TINH TOAN" << endl;
    cout << "---------------------------------" << endl;
    cout << "Chu vi      : " << chuVi << endl;
    cout << "Dien tich   : " << dienTich << endl;
    cout << "Canh nho    : " << canhNho << endl;

    return 0;
}