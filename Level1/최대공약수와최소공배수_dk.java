class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        
        answer[0] = gcd(n, m);	// 최대공약수를 구해준다.
		answer[1] = n*m / answer[0];	
	
        return answer;
    }
    public static int gcd(int a, int b) {
 
	while (b != 0) {
		int r = a % b; // 나머지를 구해준다.
 
		// GCD(a, b) = GCD(b, r)이므로 변환한다.
		a = b;
		b = r;
	}
	return a;
}
}


