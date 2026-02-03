package lab1;

import java.util.Scanner;

public class Lab1_Bai2_ChuviDT {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 1. Nhập 2 cạnh
        System.out.print("Nhập chiều dài: ");
        double dai = scanner.nextDouble();

        System.out.print("Nhập chiều rộng: ");
        double rong = scanner.nextDouble();

        // 2. Tính toán
        double chuVi = (dai + rong) * 2;
        double dienTich = dai * rong;
        double canhNho = Math.min(dai, rong);

        // 3. Xuất kết quả
        System.out.println("---------- KẾT QUẢ ----------");
        System.out.println("Chu vi: " + chuVi);
        System.out.println("Diện tích: " + dienTich);
        System.out.println("Cạnh nhỏ nhất là: " + canhNho);

        scanner.close();
    }
}