// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    vector<int> countDistinct(int a[], int n, int k)
    {
        map<int, int> m;
        for (int i = 0; i < k; i++)
        {
            m[a[i]]++;
        }

        vector<int> v;
        v.push_back(m.size());

        int i = k; 

        while (i < n)
        {
            if (m[a[i - k]] == 1)
            {
                m.erase(a[i - k]);
            }
            else
            {
                m[a[i - k]]--;
            }

            m[a[i]]++;

            v.push_back(m.size());
            i++;
        }

        return v;
    }
};
 