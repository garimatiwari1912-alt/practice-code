#include <iostream>
#include <vector>
using namespace std;
void sorttwo(vector<int> &v)
{
    //one pass solution
    //1) mid ke bare me socho
    //2)0 to lo-1 ->0, hi+1 to end ->2
    //3) lo to mid-1 ->1
    int lo = 0;
    int mid = 0;
    int hi = v.size() - 1;
    while (mid <= hi)
    {
        if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if (v[mid] == 0)
        {
            int temp = v[lo];
            v[lo] = v[mid];
            v[mid] = temp;
            lo++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    sorttwo(v);
}