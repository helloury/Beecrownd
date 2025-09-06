#include <iostream>
#include <queue>

using namespace std;

const int MOD = 1000007;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int k, N;
        cin >> k >> N;

        if (N <= k)
        {
            cout << (N - 1) % MOD << endl;
            continue;
        }

        //inicializa a fila com os primeiros k números (0, 1, ..., k-1)
        queue<int> fibQueue;
        int sum = 0;
        for (int i = 0; i < k; i++) 
        {
            fibQueue.push(i);
            sum = (sum + i) % MOD;
        }

        int result = 0;
        for (int i = k; i < N; i++) 
        {
            result = sum;

            int oldest = fibQueue.front();
            fibQueue.pop();
            sum = (sum - oldest + MOD) % MOD; 
            fibQueue.push(result);
            sum = (sum + result) % MOD; 
        }

        cout << result << endl;
    }

    return 0;
}
