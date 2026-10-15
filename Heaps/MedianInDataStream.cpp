class MedianFinder {
private:
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
public:
    void addNum(int num) { // O(logn) each query
        if(maxHeap.size() == 0 or num < maxHeap.top()) maxHeap.push(num);
        else minHeap.push(num);
        // check if size diff is >= 2
        if(maxHeap.size() >= minHeap.size() + 2){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        if(minHeap.size() >= maxHeap.size() + 2){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    double findMedian() {
        if(maxHeap.size() > minHeap.size()) return maxHeap.top();
        else if(minHeap.size() > maxHeap.size()) return minHeap.top();
        else return (minHeap.top() + maxHeap.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
