package lab1;

import java.util.Scanner;

public class Lab1_Bai4_Delta {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Nhập hệ số cho phương trình bậc 2 (ax^2 + bx + c):");

        // 1. Nhập a, b, c
        System.out.print("Nhập a: ");
        double a = scanner.nextDouble();

        System.out.print("Nhập b: ");
        double b = scanner.nextDouble();

        System.out.print("Nhập c: ");
        double c = scanner.nextDouble();

        // 2. Tính Delta
        // Math.pow(b, 2) là b bình phương
        double delta = Math.pow(b, 2) - 4 * a * c;

        // 3. Xuất căn Delta
        System.out.println("---------- KẾT QUẢ ----------");
        System.out.println("Delta = " + delta);
        System.out.println("Căn bậc hai của Delta = " + Math.sqrt(delta));

        scanner.close();
    }
}