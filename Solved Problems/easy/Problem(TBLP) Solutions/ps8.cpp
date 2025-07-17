//To find all pairs of indices in an array where the elements are equal
//Time Complexity: O(n^2)
//Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 3};

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j])
                cout << "(" << i << ", " << j << ")\n";
        }
    }

    return 0;
}
