#include <iostream>
#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
    
    std::priority_queue<int> queue;

    for(unsigned i = 0; i < values.size(); i++){
        queue.push(values.at(i));
    }

    if(k > 1) {
        for(int i = 0; i < (k-1); i++) {
            queue.pop();
        }
    }
    
    return queue.top();
}


int main() {

    std::vector<int> values = {3, 6, 2, 4, 8, 1, 9, 7, 5, 10};

    int nLargest = kth_largest(values, 4);

    std::cout << nLargest << std::endl;


    return 0;
}