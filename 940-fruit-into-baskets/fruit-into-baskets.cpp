class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> basket;
    int maxFruits = 0, left = 0;

    for (int right = 0; right < fruits.size(); ++right) {
        basket[fruits[right]]++;
        while (basket.size() > 2) {
            basket[fruits[left]]--;
            if (basket[fruits[left]] == 0) {
                basket.erase(fruits[left]);
            }
            left++;
        }
        maxFruits = max(maxFruits, right - left + 1);
    }
    return maxFruits;
}

};