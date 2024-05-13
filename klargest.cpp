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
