#include <assert>
#include "stack.h"

int main() {
    Stack<int> s;
    assert(s.size() == 0)
    assert(s.empty() == true);

    s.push(1);
    assert(s.top() == 1);
    assert(s.size() == 1);
    assert(s.empty() == false);

    int a = 2;
    s.push(a);
    assert(s.top() == 2);
    assert(s.size() == 2);

    int b;
    b = s.top();
    assert(b == 2);
    assert(s.size() == 2);

    s.pop();
    assert(s.size() == 1);

    s.pop();
    assert(s.empty() == true);
}
