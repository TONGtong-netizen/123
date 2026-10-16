#include <iostream>
using namespace std;

int main() {
	double a, b, c, d, e;
	cout << "请输入5个数：" << endl;
	cin >> a >> b >> c >> d >> e;
	double avg = (a + b + c + d + e) / 5;
	cout << "这5个数的平均数为：" << avg << endl;
	return 0;
}
