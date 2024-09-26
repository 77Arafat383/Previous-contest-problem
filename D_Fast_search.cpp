#include<bits/stdc++.h>
using namespace std;

int higherBound(vector<int> &v, int val)
{
    int l = 0, r = v.size()-1, mid;
    while (l < r) {
        mid = l + (r-l+1)/2;

        if (v[mid] > val)
            r = mid-1;
        else
            l = mid;
    }

    return l;
}

int lowerBound(vector<int> &v, int val)
{
    int l = 0, r = v.size()-1, mid;
        while (l < r) {
            mid = l + (r-l)/2;

            if (v[mid] < val)
                l = mid+1;
            else
                r = mid;
        }
    return l;
}

int main()
{
    int n, q;
    scanf("%d" ,&n);
    vector<int> v(n);
    for (auto &it: v) scanf("%d", &it);
    sort(v.begin(), v.end());

    scanf("%d", &q);
    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);

        if (v[0] > r || v[n-1] < l){
            printf("0 ");
            continue;
        }

        int low = lowerBound(v, l);
        int high = higherBound(v, r);

      //  cout << low << " " << high << " ";

        printf("%d ", high-low+1);
    }
}

