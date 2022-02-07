#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;

public class HuiWen4 {
	public static void main(String[] args) {
		long t1 = System.currentTimeMillis();
		int j = 0;
		int len;
		int halfLen;
		int buffer1;
		int k = 0;
		int iBuffer;
		String s;
		boolean flag;

		for (int i = 10; i < 100000000;) {
			flag = true;
			s = String.valueOf(i);
			len = s.length();
			halfLen = len / 2;

			for (int m = 0; m < halfLen; m++) {
				if (s.charAt(m) != s.charAt(len - 1 - m)) {
					flag = false;
					break;
				}
			}

			if (flag) {
				iBuffer = i;

				buffer1 = (int) Math.pow(10, halfLen);

				for (k = halfLen; k < len; k++) {
					if (s.charAt(k) == '9') {
						buffer1 = buffer1 / 10;

						if (k == len - 1) {
							i++;
						}
					} else {
						i = i + buffer1;
						break;
					}
				}

				if (isZhiShu(iBuffer)) {
					System.out.println(iBuffer);
					j++;
				}

			} else {
				i = i + 1;

			}

		}
		long t2 = System.currentTimeMillis();
		System.out.print(t2 - t1);
		System.out.println("ms");
		System.out.println("count:" + (j + 4));

	}
	
	public static boolean checkZhiShu(int i){
		int len = (int) Math.sqrt(i);
		
		for(int j=2;j<=len;j++){
			if(len%j == 0){
				return false;
			}
		}
		
		return true;
	}
}


public class HuiWen4 {
	public static void main(String[] args) {
		long t1 = System.currentTimeMillis();
		int j = 0;
		int len;
		int halfLen;
		int buffer1;
		int k = 0;
		int iBuffer;
		String s;
		boolean flag;

		for (int i = 10; i < 100000000;) {
			flag = true;
			s = String.valueOf(i);
			len = s.length();
			halfLen = len / 2;

			for (int m = 0; m < halfLen; m++) {
				if (s.charAt(m) != s.charAt(len - 1 - m)) {
					flag = false;
					break;
				}
			}

			if (flag) {
				iBuffer = i;

				buffer1 = (int) Math.pow(10, halfLen);

				for (k = halfLen; k < len; k++) {
					if (s.charAt(k) == '9') {
						buffer1 = buffer1 / 10;

						if (k == len - 1) {
							i++;
						}
					} else {
						i = i + buffer1;
						break;
					}
				}

				if (isZhiShu(iBuffer)) {
					System.out.println(iBuffer);
					j++;
				}

			} else {
				i = i + 1;

			}

		}
		long t2 = System.currentTimeMillis();
		System.out.print(t2 - t1);
		System.out.println("ms");
		System.out.println("count:" + (j + 4));

	}
	
	public static boolean checkZhiShu(int i){
		int len = (int) Math.sqrt(i);
		
		for(int j=2;j<=len;j++){
			if(len%j == 0){
				return false;
			}
		}
		
		return true;
	}
}
