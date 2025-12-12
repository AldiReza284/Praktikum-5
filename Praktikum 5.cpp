#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int data[] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
    vector<int> myVector(begin(data), end(data));

    auto cetakVector = [](const vector<int>& vec, const string& judul) {
        cout << judul << endl;
        for (int x : vec) {
            cout << x << " | ";
        }
        cout << "\n====================================================\n";
        };

    cetakVector(myVector, "Isi vector awal:");

    sort(myVector.begin(), myVector.end());
    cetakVector(myVector, "Isi vector setelah sorting ASC :");

    sort(myVector.begin(), myVector.end(), greater<int>());
    cetakVector(myVector, "Isi vector setelah sorting DESC :");

    return 0;
}