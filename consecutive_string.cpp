#include <string>
#include <vector>
#include <string>
#include <iostream>

class LongestConsec {

public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k) {

        std::string combined_string;
        std::string longest_string;

        if (strarr.size() == 0 || k > strarr.size() || k <= 0) {
            return "";
        }

        for (int i = 0; i < strarr.size(); i++) {
            if (i == strarr.size() - (k - 1)) {
                return longest_string;
            }

            for (int x = 0; x < k; x++) {
                combined_string += strarr[i + x];
            }

            if (combined_string.length() > longest_string.length()) {
                longest_string = combined_string;
            }

            combined_string = "";
        }

        return longest_string; // If k == 1, the loop will end before returning. So I put longest_string as the default return value
    }   
};

int main() {

    std::vector<std::string> strarr = {"tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"}; 
    int k = 2;

    LongestConsec a_class;
    std::string answer = a_class.longestConsec(strarr, k);

    std::cout << answer << std::endl;

    return 0;
}