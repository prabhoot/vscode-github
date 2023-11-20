#include <bits/stdc++.h>
using namespace std;

unordered_set<char> move(const unordered_set<char>& states, char symbol, const unordered_map<char, unordered_map<char, unordered_set<char>>>& transitions) {
    unordered_set<char> moveStates;
    for (const auto& state : states) {
        if (transitions.find(state) != transitions.end() && transitions.at(state).find(symbol) != transitions.at(state).end()) {
            moveStates.insert(transitions.at(state).at(symbol).begin(), transitions.at(state).at(symbol).end());
        }
    }
    return moveStates;
}
pair<unordered_map<unordered_set<char>, unordered_map<char, unordered_set<char>>>, vector<unordered_set<char>>> nfa_to_dfa(
    const unordered_map<char, unordered_map<char, unordered_set<char>>>& nfaTransitions,
    char startState,
    const unordered_set<char>& nfaAcceptStates,
    const unordered_set<char>& alphabet
) {
    unordered_map<unordered_set<char>, unordered_map<char, unordered_set<char>>> dfaTransitions;
    vector<unordered_set<char>> dfaAcceptStates;

    queue<unordered_set<char>> queue;
    unordered_set<char> visited;

    unordered_set<char> startSet = { startState };
    queue.push(startSet);
    visited.insert(startSet);

    while (!queue.empty()) {
        unordered_set<char> currentStates = queue.front();
        queue.pop();

        for (char symbol : alphabet) {
            unordered_set<char> newStates = move(currentStates, symbol, nfaTransitions);

            if (!newStates.empty()) {
                if (visited.find(newStates) == visited.end()) {
                    queue.push(newStates);
                    visited.insert(newStates);
                }
                dfaTransitions[currentStates][symbol] = newStates;
            }
        }
    }

    for (const auto& state : visited) {
        for (char s : state) {
            if (nfaAcceptStates.find(s) != nfaAcceptStates.end()) {
                dfaAcceptStates.push_back(state);
                break;
            }
        }
    }

    return make_pair(dfaTransitions, dfaAcceptStates);
}

int main() {
    unordered_map<char, unordered_map<char, unordered_set<char>>> nfaTransitions = {
        {'A', { {'0', {'A'}}, {'1', {'A', 'B'}} }},
        {'B', { {'1', {'C'}} }},
        {'C', { {'0', {'D'}}, {'1', {'D'}} }},
        {'D', { {'0', {'D'}}, {'1', {'D'}} }}
    };

    char nfaStartState = 'A';
    unordered_set<char> nfaAcceptStates = { 'C', 'D' };
    unordered_set<char> alphabet = { '0', '1' };

    auto result = nfa_to_dfa(nfaTransitions, nfaStartState, nfaAcceptStates, alphabet);

    cout << "DFA Transitions:" << endl;
    for (const auto& transition : result.first) {
        for (const auto& symbol : transition.second) {
            cout << "{";
            for (const auto& state : transition.first) {
                cout << state << " ";
            }
            cout << "}, " << symbol.first << " -> {";
            for (const auto& state : symbol.second) {
                cout << state << " ";
            }
            cout << "}" << endl;
        }
    }

    cout << "DFA Accept States: {";
    for (const auto& state : result.second) {
        cout << "{";
        for (const auto& s : state) {
            cout << s << " ";
        }
        cout << "} ";
    }
    cout << "}" << endl;

    return 0;
}
