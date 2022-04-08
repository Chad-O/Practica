#include <iostream>
#include <queue>
#include <stack>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.pop();
    stack<int> st;
    st.push(3);
    st.push(2);
    st.top();
    st.pop();

    deque<int> dq;
    dq.push_back(2);
    dq.push_front(3);
    dq.pop_back();
    dq.pop_front();

    list<int> li;
    li.push_back(3);
    li.push_front(4);
    li.emplace_back(1);

    return 0;
}
