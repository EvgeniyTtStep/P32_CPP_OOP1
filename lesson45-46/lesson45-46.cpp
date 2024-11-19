#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
    vector<int> nums;

    vector nums2(1001, 0); //0,0,0,0,0

    vector nums3 = {10, 20, 30, 40};

    // for (int i = 0; i < nums2.size(); i++) {
    //     cout << nums2[i] << " ";
    // }

    cout << endl;

    nums3.push_back(50);

    for (int item: nums3) {
        cout << item << " ";
    }

    nums3.pop_back(); //видаляє останній елемент

    cout << endl;

    for (int item: nums3) {
        cout << item << " ";
    }

    cout << endl;


    cout << "Index 2 elemnt [2] = " << nums3[2] << endl;
    cout << "Index 2 elemnt at = " << nums3.at(2) << endl;

    cout << "First elemnt = " << nums3.front() << endl;
    cout << "Last elemnt = " << nums3.back() << endl;

    cout << "First elemnt = " << nums3[0] << endl;
    cout << "Last elemnt = " << nums3[nums3.size() - 1] << endl;


    cout << "Size = " << nums3.size() << endl;
    cout << "Capacity = " << nums3.capacity() << endl;

    nums2.push_back(0);
    nums2.push_back(0);
    cout << "Size = " << nums2.size() << endl;
    cout << "Capacity = " << nums2.capacity() << endl;

    nums3.erase(nums3.begin() + 1, nums3.end() - 1); //30

    for (int item: nums3) {
        cout << item << " ";
    }

    cout << endl;

    for (auto iter = nums3.begin(); iter < nums3.end(); iter++) {
        cout << *iter << " ";
    }


    cout << endl;

    //=== sort ===
    vector nums4 = {15, 14, 12, 13, 16, 9, 10, 11, 12};
    sort(nums4.begin(), nums4.end());
    for (int item: nums4) {
        cout << item << " ";
    }

    nums4.insert(nums4.end() - (nums4.size() / 2), 17);
    cout << endl;

    for (int item: nums4) {
        cout << item << " ";
    }
}
