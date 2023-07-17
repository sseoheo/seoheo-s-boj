#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int up, down, height, climbing_day;
	cin >> up >> down >> height;

	if ((height - up) % (up - down) == 0)
		climbing_day = (height - up) / (up - down);
	else
		climbing_day = (height - up) / (up - down) + 1;

	cout << climbing_day+1;

	return 0;
}