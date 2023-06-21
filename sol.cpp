#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> times(N);
    for (int i = 0; i < N; i++) {
        cin >> times[i];
    }
    sort(times.begin(), times.end(),greater <int>());
    int sanskaar_time = 0;
    int anaswar_time = 0;
    int solved_questions = 0;
    for (int i = 0; i < N; i++) {
        if (sanskaar_time + times[i] <= X) {
            sanskaar_time += times[i];
            solved_questions++;
        } else if (anaswar_time + times[i] <= X) {
            anaswar_time += times[i];
            solved_questions++;
        } else {
            break;
        }
    }
    if (solved_questions < N) {
        cout << "No" << endl;
    } else {
        cout<< "Yes" << endl;
    }
    
    return 0;
}
