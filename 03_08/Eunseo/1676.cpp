#include<iostream>
using namespace std;
//실제 팩토리얼 구하는 방법으로 하면 숫자가 너무 커지기 때문에 시간초과가 뜸
// 10 = 2 * 5이므로, 주어진 숫자보다 작은 2와 5의 배수 개수를 세서 min(2의 개수, 5의 개수)를 통해 구해줌
//근데 이때, 2의 개수 >>>>>> 5의 개수이므로, 5의 배수의 숫자를 세준다.
//이때, 25와같이 5의 제곱수의 경우를 조심


int main(){
	int n, cnt;
	cin >> n;
	cnt = 0;
	for (int i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}
	cout << cnt;
}

