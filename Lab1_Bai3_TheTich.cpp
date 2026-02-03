package lab1;

import java.util.Scanner;

public class Lab1_Bai3_TheTich {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 1. Nhập cạnh khối lập phương
        System.out.print("Nhập cạnh của khối lập phương: ");
        double canh = scanner.nextDouble();

        // 2. Tính thể tích (Cạnh lũy thừa 3)
        double theTich = Math.pow(canh, 3);

        // 3. Xuất kết quả
        System.out.println("Thể tích khối lập phương là: " + theTich);

        scanner.close();
    }
}