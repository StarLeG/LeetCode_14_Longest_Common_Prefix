#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


       return "";

    }
};

Solution solution;

int main()
{

    vector<string> strs{"flower","flow","flight"};
    string answ = solution.longestCommonPrefix(strs);

    std::cout << answ << std::endl;
    return 0;
}
