#include <iostream>
#include <deque>
using namespace std;

int main() {
    int numberOfWords, shift;
    cin >> numberOfWords >> shift;
    deque<string> dimashyesos;
    for(int i = 0; i < numberOfWords; i++){
        string a; cin >> a;
        dimashyesos.push_back(a);
    }
    for(int i = 0; i < shift; i++){
        dimashyesos.push_back(dimashyesos.front());
        dimashyesos.pop_front();
    }
    for(int i = 0; i < numberOfWords; i++){
        cout << dimashyesos.front() << " ";
        dimashyesos.pop_front();
    }
    return 0;
}
