// *************PAIRS**********//
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     pair<int, float> p; // make pair

//     // pr = make_pair(4, 5.6);   //ways to insert data in pairs
//     // p = {4, 43.40};
//     // cout << pr.first << " " << pr.second << endl; // way to access elements of pair.

//     cin >> p.first;
//     cout << p.first << endl;
//     cin >> p.second;
//     cout << p.second;
// }

//*****************vectors*****************//
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
int main()
{   
    vector<int> v;
    v.push_back(10);
    v.push_back(45);
    // v.pop_back(45);
    printVec(v);
}
