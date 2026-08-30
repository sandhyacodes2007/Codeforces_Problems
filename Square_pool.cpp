#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int dx, dy, xi, yi;
            cin >> dx >> dy >> xi >> yi;
            // Check if the ball is heading towards a corner based on initial direction and position
            bool potted = false;
            // The ball will be potted if after reflections, it reaches a corner
            // The condition is that (x + y) or (x - y) matches certain values modulo 2*s
            if (dx == 1 && dy == 1) {
                // Towards (s, s)
                if ((xi + yi) % (2 * s) == 0) {
                    potted = true;
                }
            } else if (dx == 1 && dy == -1) {
                // Towards (s, 0)
                if ((xi - yi) % (2 * s) == 0) {
                    potted = true;
                }
            } else if (dx == -1 && dy == 1) {
                // Towards (0, s)
                if ((yi - xi) % (2 * s) == 0) {
                    potted = true;
                }
            } else if (dx == -1 && dy == -1) {
                // Towards (0, 0)
                if ((xi + yi) % (2 * s) == 0) {
                    potted = true;
                }
            }
            if (potted) {
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}