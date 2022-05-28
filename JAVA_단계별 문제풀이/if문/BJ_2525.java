package BeakJoon_2;

import java.util.Scanner;

public class BJ_2525 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int H = sc.nextInt();
		int M = sc.nextInt();

		int time = sc.nextInt();

		sc.close();

		int a = H * 60 + M + time;
		H = a / 60;
		M = a % 60;

		if (H >= 24)
			H -= 24;

		System.out.println(H + " " + M);
	}

}
