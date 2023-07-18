#include <bits/stdc++.h>
using namespace std;
const int MAX_RESOURCES = 10;
int num_processes, num_resources;
vector<vector<int>> allocation;
vector<vector<int>> maximum;
vector<int> available;
vector<int> safe_sequence;
bool isSafe() {
    vector<vector<int>> need(num_processes, vector<int>(num_resources, 0));
    bool safe = false;
    int count = 0;
    for (int i = 0; i < num_processes; i++) {
        for (int j = 0; j < num_resources; j++) {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }
    vector<int> work = available;
    vector<bool> finish(num_processes, false);
    while (count < num_processes) {
        bool found = false;
        for (int i = 0; i < num_processes; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < num_resources; j++) {
                    if (need[i][j] > work[j])
                        break;
                }
                if (j == num_resources) {
                    for (int k = 0; k < num_resources; k++) {
                        work[k] += allocation[i][k];
                    }
                    finish[i] = true;
                    found = true;
                    count++;
                    safe_sequence.push_back(i);
                }
            }
        }
        if (!found)
            break;
    }
    if (count == num_processes)
        safe = true;
    return safe;
}
int main() {
    cout << "Enter the number of processes: ";
    cin >> num_processes;
    cout << "Enter the number of resources: ";
    cin >> num_resources;
    allocation.resize(num_processes, vector<int>(num_resources, 0));
    cout << "Enter the allocation matrix:\n";
    for (int i = 0; i < num_processes; i++) {
        for (int j = 0; j < num_resources; j++) {
            cin >> allocation[i][j];
        }
    }
    maximum.resize(num_processes, vector<int>(num_resources, 0));
    cout << "Enter the maximum matrix:\n";
    for (int i = 0; i < num_processes; i++) {
        for (int j = 0; j < num_resources; j++) {
            cin >> maximum[i][j];
        }
    }
    available.resize(num_resources, 0);
    cout << "Enter the available vector:\n";
    for (int i = 0; i < num_resources; i++) {
        cin >> available[i];
    }
    if (isSafe()) {
        cout << "The system is in a safe state.\n";
        for (int i = 0; i < safe_sequence.size(); i++) {
            cout << "P" << safe_sequence[i];
            if (i != safe_sequence.size() - 1) {
                cout << " -> ";
            }
        }
    } else
        cout << "The system is not in a safe state.\n";
    cout<<endl;
    return 0;
}

// 5
// 3
// allocation
// 0 1 0
// 2 0 0
// 3 0 2
// 2 1 1
// 0 0 2
// max:->
// 7 5 3
// 3 2 2
// 9 0 2
// 2 2 2
// 4 3 3
// available vertor
// 3 3 2