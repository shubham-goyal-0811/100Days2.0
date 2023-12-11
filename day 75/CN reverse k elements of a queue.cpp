#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> tempStack;

    // Push the first K elements into the stack
    for (int i = 0; i < k; ++i) {
        tempStack.push(q.front());
        q.pop();
    }

    // Pop the elements from the stack and enqueue them back to the queue
    while (!tempStack.empty()) {
        q.push(tempStack.top());
        tempStack.pop();
    }

    // Enqueue the remaining elements back to the queue
    for (int i = 0; i < q.size() - k; ++i) {
        q.push(q.front());
        q.pop();
    }

    return q;

}
