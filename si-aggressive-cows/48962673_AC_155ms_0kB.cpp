#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, C;
        cin >> N >> C;
        vector<int> stalls(N);
        for (int i = 0; i < N; ++i) {
            cin >> stalls[i];
        }

        sort(stalls.begin(), stalls.end());

        int low = 0;
        int high = stalls.back() - stalls.front();
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int count = 1;
            int last_position = stalls[0];

            for (int i = 1; i < N; ++i) {
                if (stalls[i] - last_position >= mid) {
                    count++;
                    last_position = stalls[i];
                }
            }

            if (count >= C) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
