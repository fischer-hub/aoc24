#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>

int main(int argc, char const *argv[])
{
    std::vector<int> list1 = std::vector<int>();
    std::vector<int> list2 = std::vector<int>();
    std::vector<int> diffs = std::vector<int>();

    std::ifstream infile ("input.txt");

    int col1;
    int col2;
    int diff;

    // read in file into two lists
    while (infile >> col1 >> col2) {
        list1.push_back(col1);
        list2.push_back(col2);
    }

    // sort lists
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());

    // print lists
    for (uint i = 0; i < list1.size(); i++)
        diffs.push_back(abs(list1[i] - list2[i]));

    std::cout << "Sum of differences between first and second list is: " << std::accumulate(diffs.begin(), diffs.end(), 0) << std::endl;

    return 0;
}
