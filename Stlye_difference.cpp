C++
#include <vector>


int calculateSum(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

int sum_numbers(std::vector<int> numbers) {
    int total=0;
    for(int number:numbers)total+=number;
    return total;
}

int computeTotal(const std::vector<int>& number_collection) {
    int accumulated_value = 0;
    for (int current_number : number_collection) {
        accumulated_value = accumulated_value + current_number;
    }
    return accumulated_value;
}