#include <bits/stdc++.h>
using namespace std;
vector<int> rotate(vector<int> &v, int n, int d)
{
    d = d % n;
    vector<int> a;
    a.insert(a.begin(), v.begin() + d, v.end());
    for (int i = 0; i < d; i++)
    {

        a.push_back(v[i]);
    }
    return a;
}
int main()
{
    cout << "enter array size" << endl;
    int n;
    cin >> n;
    vector<int> v;
    vector<int> a;
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "enter the rotation number" << endl;
    int d;
    cin >> d;
    cout << "your array is :-";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl
         << "rotated array is :-";
    a = rotate(v, v.size(), d);
    for (auto k : a)
    {
        cout << k << " ";
    }
    cout << endl;
}