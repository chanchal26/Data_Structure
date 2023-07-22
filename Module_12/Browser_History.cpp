#include<bits/stdc++.h>
using namespace std;

int main() {
    list<string> myList;
    string val;

    while (true) {
        cin>>val;
        if(val=="end") break;
        myList.push_back(val);
    }

    int q;
    cin >> q;

    list<string>::iterator cur = myList.begin();

    while (q--) {
        string com;
        cin >> com;

        if (com == "visit") {
            string tar;
            cin >> tar;

            auto it = find(myList.begin(), myList.end(), tar);
            if (it != myList.end()) {
                cur = it;
                cout << *cur << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (com == "next") {
            if (cur != prev(myList.end())) {
                cur++;
                cout << *cur << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (com == "prev") {
            if (cur != myList.begin()) {
                cur--;
                cout << *cur << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
