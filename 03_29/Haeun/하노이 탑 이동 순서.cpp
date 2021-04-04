// https://www.youtube.com/watch?v=aPYE0anPZql

#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int end, int other) {
    if (n == 1) cout << start << " " << end << "\n";
    else{
        hanoi(n - 1, start, other, end);
        cout << start << " " << end << "\n";
        hanoi(n - 1, other, end, start);
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

    cout << (1 << n) - 1 << "\n";
    // pow()�� �Ǽ������� ���Ǳ� ������ ����ó�� ��
    hanoi(n, 1, 3, 2);

}