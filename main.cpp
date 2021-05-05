#include <iostream>
#include <vector>

using namespace std;
// returns index of element in array. If array doesn't have this element, returns -1
int binary_search(vector<int> arr, int num) {
    int begin = 0;
    int end = arr.size();
    int curr_index = (end + begin) / 2;
    if (arr[0] == num) {
        return 0;
    }
    if (arr[arr.size() - 1] == num) {
        return arr.size() - 1;
    }
    do {
        if (arr[curr_index] == num) {
            return curr_index;
        }
        if (arr[curr_index] > num) {
            end = curr_index;
        } else {
            begin = curr_index;
        }
        curr_index = (end + begin) / 2;
    } while (begin != curr_index);
    return -1;
}
int one_mode_function(vector<int> arr){
    bool is_raise = arr[]

}
int main(int argc, char **argv) {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << binary_search(arr, 2);
    return 0;
}

