#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";

        string perfix = strs[0];
        for(int i=0;i<strs.size();i++){
            while(strs[i].find(perfix) != 0){
                perfix = perfix.substr(0,perfix.size() - 1);
            }
        }
        return perfix;


    }
};

Solution solution;

int main()
{

    vector<string> strs{"c","acc","ccc"};
    string answ = solution.longestCommonPrefix(strs);

    std::cout << answ << std::endl;
    return 0;
}
