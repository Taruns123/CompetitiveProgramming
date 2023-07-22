#include<bits/stdc++.h>
using namespace std;


const int N = 1e6+7;

struct fenwick{
    vector<int> fn;
    int n;
    void init(int _n){
        this->n = _n;
        this->n++;
        fn.resize(this->n);
    }

    

    void add(int x, int y) {
		x++; // 1 based index
		while (x < n) {
			fn[x] += y;
			x += (x & (-x));// last set bit
		}
	}

	

	

	int sum(int x) {
		x++; // 1 based index
		int ans = 0;
		while (x) {
			ans += fn[x];
			x -= (x & (-x));// last set bit
		}
		return ans;
	}

	int sumQuery(int l, int r) {
		return sum(r) - sum(l - 1);
	}

};


struct query{
    int l, r,ans,index;
    bool operator<(query P) const {
		return make_pair(this->r, this->l) < make_pair(P.r, P.l);
	}
}queries[N];


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for (auto &&i : arr)
    {
        cin>>i;
    }

    int q;
    cin>>q;

    

    for (int i = 0; i < q; i++)
    {
        cin>>queries[i].l>>queries[i].r;
    }
    
    sort(queries,queries+q);
    
    int x=0;int y =0;

    vector<int> hasher(N);
    
    
    
    

    
    return 0;

}