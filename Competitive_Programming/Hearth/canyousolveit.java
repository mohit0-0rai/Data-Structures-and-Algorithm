import java.util.*;
import java.io.*;

public class canyousolveit {

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t, n;
		t = sc.nextInt();
		while(t-- > 0) {
			n = sc.nextInt();
			int a[] = new int[n];
			int a1[] = new int[n];
			int a2[] = new int[n];
			for(int i = 0; i < n; ++i)
				a[i] = sc.nextInt();
			for(int i = 0; i < n; ++i) {
				a1[i] = a[i] + i;
				a2[i] = a[i] - i;
			}
			int max = a1[0], min = a1[0], res;
			for(int i = 1; i < n; ++i) {
				if(min > a1[i])
					min = a1[i];
				if(max < a1[i])
					max = a1[i];
			}
			res = max - min;
			min = a2[0]; max = a2[0];
			for(int i = 1; i < n; ++i) {
				if(min > a2[i])
					min = a2[i];
				if(max < a2[i])
					max = a2[i];
			}
			if(res < max - min)
				res = max - min;
			System.out.println(res);
		}
	}
}

