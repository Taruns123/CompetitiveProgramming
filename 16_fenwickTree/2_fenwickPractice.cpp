#include<bits/stdc++.h>
using namespace std;

struct fenwick{
    vector<int> ft;
    int n;
    void init(int n){
        this->n = n+1;
        ft.resize(this->n,0);
    }

    void addElement(int x, int y){
        x++;
        while(x<n){
            ft[x]+= y;
            x += (x& (-x));
        }
    }

    int sum(int x){
        x++;
        int ans = 0;
        while(x){
            ans+= ft[x];
            x-= (x & (-x));
        }
        return ans;
    }

    int sumQ(int l,int r){
        return sum(r)-sum(l-1);
    }
};

int main(int argc, char const *argv[])
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	fenwick tree;
	tree.init(v.size());

	for (int i = 0; i < v.size(); i++) {
		tree.addElement(i, v[i]);
	}

	cout << tree.sumQ(3, 5) << '\n';


    return 0;

}