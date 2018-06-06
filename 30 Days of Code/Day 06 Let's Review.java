import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
		StringBuilder strEven = new StringBuilder();
		StringBuilder strOdd = new StringBuilder();
		String rawString;
		Scanner scan = new Scanner(System.in);
		int n, i, j;
		n = scan.nextInt();
		String[] string = new String[n];
		for (i = 0; i < n; i++) {
			rawString = scan.next();
			for (j = 0; j < rawString.length(); j++) {
				if (j % 2 == 0) {
					strEven.append(rawString.charAt(j));
				} else {
					strOdd.append(rawString.charAt(j));
				}
			}
			string[i] = strEven.toString();
			string[i] += " ";
			string[i] += strOdd.toString();
			strOdd.delete(0, strOdd.length());
			strEven.delete(0, strEven.length());
		}
		for (String str : string) {
			System.out.println(str);
		}
		scan.close();
	}
}