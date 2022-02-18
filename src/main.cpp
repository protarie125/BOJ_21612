#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int b;
	cin >> b;

	auto p = 5 * b - 400;
	cout << p << '\n'
		<< (p < 100 ? 1 : (100 < p ? -1 : 0));

	return 0;
}