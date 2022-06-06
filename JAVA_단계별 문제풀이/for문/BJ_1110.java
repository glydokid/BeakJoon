package BeakJoon_3;

import java.util.Scanner;

public class BJ_1110 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int result = sc.nextInt();
		int number;
		int a, b, c, d;
		int count = 0;

		sc.close();

		number = result;

		while (true) {
			a = number / 10;
			b = number % 10;
			c = (a + b);
			d = (b * 10) + (c % 10);
			
			number = d;

			count++;

			if (result == d)
				break;
		}
		System.out.println(count);
	}

}
