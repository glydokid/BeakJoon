package BeakJoon_2;

import java.util.Scanner;

public class BJ_1330 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("두 숫자를 입력하세요");
		int A = sc.nextInt();
		int B = sc.nextInt();

		if (A > B) {
			System.out.print(">");
		} else if (A < B) {
			System.out.print("<");
		} else if (A == B) {
			System.out.print("==");
		}
		
		sc.close();
	}
}
