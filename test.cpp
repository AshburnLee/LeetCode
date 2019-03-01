#include <iostream>
#include <map>
#include "LinkedListUtil.h"
#include <queue>

using namespace std;

int main(int argc, char const *argv[]) {
    int i;
    int a[] = { 1, 2, 3, 4, 5, 5, 5 };

    map<int, int> myMap;
    for (i = 0; i < 7; i++)
    {
        if (myMap.end() != myMap.find(a[i])) myMap[a[i]]++;
        else myMap.insert(pair<int, int>(a[i], 1));
    }
    for (auto it : myMap)
    {
        cout << it.first << " " << it.second << endl;
    }


    // priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i=0;i<10;i++){
        int num = rand()%100;
        pq.push(num);
        cout<<num<<" has been pushed to priority queue"<<endl;
    }

    // pop items from pq
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}
