import java.util.*;
import java.io.*;

public class StringHashing {
	final static int MOD = 1000000009;
	final static int P = 31;
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		long hash = 0, po = 1;
		for(int i = 0; i < s.length(); ++i) {
			hash = (hash + po * (s.charAt(i) - 'a' + 1)) % MOD;
			po = (po * P) % MOD;
		}
		System.out.println("Hash for string " + s + " is " + hash);
	}
}

