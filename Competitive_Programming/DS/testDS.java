import java.io.*;
import java.util.*;
import java.lang.Math;

class segTree {
	
	public int st[];
	segTree(int a[], int n) {
		st = new int[4*n];
		createST(a, 1, 0, n-1);
	}

	public void createST(int a[], int v, int L, int R) {
		if(L == R)
			st[v] = a[L];
		else {
			int mid = (L + R) / 2;
			createST(a, 2*v, L, mid);
			createST(a, 2*v+1, mid+1, R);
			st[v] = Math.max(st[2*v], st[2*v+1]);
		}
	}

	public void update(int v, int pos, int value, int L, int R) {
		if(L == R)
			st[v] = value;
		else {
			int mid = (L + R) / 2;
			if(pos <= mid)
				update(2*v, pos, value, L, mid);
			else
				update(2*v+1, pos, value, mid+1, R);
			st[v] = Math.max(st[2*v], st[2*v+1]);
		}
	}

	public int query(int v, int l, int r, int L, int R) {
		if(l > R || r < L)
			return 0;
		if(l <= L && r >= R)
			return st[v];
		int mid = (L + R) / 2;
		return Math.max(query(2*v, l, r, L, mid), query(2*v+1, l, r, mid+1, R));
	}

}

public class testDS {
	final static int MOD = 1000000009;
	
	public static void main(String args[]) {
		InputReader in = new InputReader(System.in);
		int a[] = {5,3,2,6,7,9,12,10};
		segTree tree = new segTree(a, a.length);
		for(int i = 0; i < 4*a.length; ++i) {
	//		System.out.print(tree.st[i]);
		}
		System.out.println(tree.query(1, 2, 5, 0, a.length-1));
	}


class pair<T1, T2> {
	public T1 first;
	public T2 second;
	pair() { }
	pair(T1 first, T2 second) {
		this.first = first;
		this.second = second;
	}
}
	//FastIO
	private static class InputReader {
		private InputStream stream;
		private byte[] buf = new byte[1024];
		private int curChar;
		private int numChars;
		private SpaceCharFilter filter;
		
		public InputReader(InputStream stream) {
			this.stream = stream;
		}
		
		public int read() {
			if (numChars == -1) {
				throw new InputMismatchException();
			}
			if (curChar >= numChars) {
				curChar = 0;
				try {
					numChars = stream.read(buf);
				} catch (IOException e) {
					throw new InputMismatchException();
				}
				if (numChars <= 0) {
					return -1;
				}
			}
			return buf[curChar++];
		}
		
		public int readInt() {
			int c = read();
			while (isSpaceChar(c)) {
				c = read();
			}
			int sgn = 1;
			if (c == '-') {
				sgn = -1;
				c = read();
			}
			int res = 0;
			do {
				if (c < '0' || c > '9') {
					throw new InputMismatchException();
				}
				res *= 10;
				res += c - '0';
				c = read();
			} while (!isSpaceChar(c));
			return res * sgn;
		}
		
		public String readString() {
			int c = read();
			while (isSpaceChar(c)) {
				c = read();
			}
			StringBuilder res = new StringBuilder();
			do {
				res.appendCodePoint(c);
				c = read();
			} while (!isSpaceChar(c));
			return res.toString();
		}
		
		public double readDouble() {
			int c = read();
			while (isSpaceChar(c)) {
				c = read();
			}
			int sgn = 1;
			if (c == '-') {
				sgn = -1;
				c = read();
			}
			double res = 0;
			while (!isSpaceChar(c) && c != '.') {
				if (c == 'e' || c == 'E') {
					return res * Math.pow(10, readInt());
				}
				if (c < '0' || c > '9') {
					throw new InputMismatchException();
				}
				res *= 10;
				res += c - '0';
				c = read();
			}
			if (c == '.') {
				c = read();
				double m = 1;
				while (!isSpaceChar(c)) {
					if (c == 'e' || c == 'E') {
						return res * Math.pow(10, readInt());
					}
					if (c < '0' || c > '9') {
						throw new InputMismatchException();
					}
					m /= 10;
					res += (c - '0') * m;
					c = read();
				}
			}
			return res * sgn;
		}
		
		public long readLong() {
			int c = read();
			while (isSpaceChar(c)) {
				c = read();
			}
			int sgn = 1;
			if (c == '-') {
				sgn = -1;
				c = read();
			}
			long res = 0;
			do {
				if (c < '0' || c > '9') {
					throw new InputMismatchException();
				}
				res *= 10;
				res += c - '0';
				c = read();
			} while (!isSpaceChar(c));
			return res * sgn;
		}
		
		public boolean isSpaceChar(int c) {
			if (filter != null) {
				return filter.isSpaceChar(c);
			}
			return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
		}
		
		public String next() {
			return readString();
		}
		
		public interface SpaceCharFilter {
			public boolean isSpaceChar(int ch);
		}
	}
	
	private static class OutputWriter {
		private final PrintWriter writer;
		
		public OutputWriter(OutputStream outputStream) {
			writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
		}
		
		public OutputWriter(Writer writer) {
			this.writer = new PrintWriter(writer);
		}
		
		public void print(Object... objects) {
			for (int i = 0; i < objects.length; i++) {
				if (i != 0) {
					writer.print(' ');
				}
				writer.print(objects[i]);
			}
			writer.flush();
		}
		
		public void printLine(Object... objects) {
			print(objects);
			writer.println();
			writer.flush();
		}
		
		public void close() {
			writer.close();
		}
		
		public void flush() {
			writer.flush();
		}
	}
}
