#include <queue>;
using namespace std;

class SlidingWindow
{
public:
    queue<int> slidingWindow;
    int bucketCap;
    int time;
    SlidingWindow(int _time, int _cap)
    {
        time = _time;
        bucketCap = _cap;
    }
};