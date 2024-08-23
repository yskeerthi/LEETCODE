#include <vector>
#include <string>
#include <unordered_set>

class Solution {
public:
    std::string destCity(std::vector<std::vector<std::string>>& paths) {
        std::unordered_set<std::string> startCities;
        
        for (const auto& path : paths) {
            startCities.insert(path[0]);
        }
        
        for (const auto& path : paths) {
            if (startCities.find(path[1]) == startCities.end()) {
                return path[1];
            }
        }
        
        return "";
    }
};
