package BeakJoon_3;

import java.io.*;

public class BJ_15552 {

	public static void main(String[] args) throws IOException { // InputStream==null 일때의 장애를 대 비

		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int n = Integer.parseInt(bf.readLine());

		for (int i = 0; i < n; i++) {

			String s = bf.readLine();

			int a = Integer.parseInt(s.split(" ")[0]);
			int b = Integer.parseInt(s.split(" ")[1]);

			bw.write(a + b + "\n");
		}
		bw.flush();

		bw.write("hello");
		bw.flush();
	}

}
