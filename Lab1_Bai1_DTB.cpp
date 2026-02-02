/*
 * Bai tap: Lab1_Bai1_DTB
 * Yeu cau: Viet chuong trinh nhap ho ten, diem trung binh va xuat ra man hinh.
 */

#include <iostream>
#include <string>   
#include <iomanip>

using namespace std;

int main() {
    // 1. Khai bao bien
    string hoTen;
    float diemTB;

    // 2. Nhap du lieu
    cout << "Nhap ho va ten sinh vien: ";
    getline(cin, hoTen); 

    cout << "Nhap diem trung binh: ";
    cin >> diemTB;

    // 3. Xuat du lieu ra man hinh
    cout << "\n---------------------------------" << endl;
    cout << "       THONG TIN SINH VIEN       " << endl;
    cout << "---------------------------------" << endl;
    cout << "Ho va ten       : " << hoTen << endl;
    cout << "Diem trung binh : " << diemTB << endl;
    
    // Ket thuc chuong trinh
    return 0;
}