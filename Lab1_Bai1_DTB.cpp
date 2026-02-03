package lab1;
import java.util.Scanner;

public class Lab1_Bai1_DTB {
    public static void main(String[] args) {
        // Khởi tạo Scanner để nhập dữ liệu từ bàn phím
        Scanner scanner = new Scanner(System.in);

        // 1. Nhập Họ và tên
        System.out.print("Nhập họ và tên sinh viên: ");
        String hoTen = scanner.nextLine();

        // 2. Nhập Điểm trung bình
        System.out.print("Nhập điểm trung bình: ");
        double diemTB = scanner.nextDouble();

        // 3. Xuất ra màn hình
        System.out.println("---------------------------------");
        System.out.printf("Sinh viên: %s\n", hoTen);
        System.out.printf("Điểm TB: %.2f điểm\n", diemTB);
        System.out.println("---------------------------------");

        scanner.close(); //
    }
}