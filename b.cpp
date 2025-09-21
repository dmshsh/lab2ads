#include <iostream>
#include <deque>
using namespace std;

int main() {
    int numberOfWords, shift;
    cin >> numberOfWords >> shift;
    deque<string> d;
    for(int i = 0; i < numberOfWords; i++){
        string a; cin >> a;
        d.push_back(a);
    }
    for(int i = 0; i < shift; i++){
        d.push_back(d.front());
        d.pop_front();
    }
    for(int i = 0; i < numberOfWords; i++){
        cout << d.front() << " ";
        d.pop_front();
    }
    return 0;
}
