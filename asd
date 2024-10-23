#include <iostream>
#include <cmath>

using namespace std;

int P(string str, int st, int en, int mistake) {
	if (st>en) return mistake;
	if (str[st]==str[en]) {
		return P(str, st+1, en-1, mistake)
	} else {
		if (!mistake) {
			return min(P(str, st+2, en-1, mistake+1), P(str, st+1, en-2, mistake+1));
		} else {
			return 2;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
