#include<bits/stdc++.h>
using namespace std;

//helper method
int merge(vector<int> &array,int s,int e){
	int i = s;
	int m = (s+e)/2;
	int j = m + 1;

	vector<int> temp;
    int crossCount = 0;
    int k =0;
	while(i<=m and j<=e){
		if(array[i] < array[j]){
			temp.push_back(array[i]);
			i++;
            k++;
		}
		else{
			temp.push_back(array[j]);
            crossCount+= m-i+1;
			j++;
            k++;
		}
	}


	//copy rem elements from first array
	while(i<=m){
		temp.push_back(array[i++]);
	}

	// or copy rem elements from second array
	while(j<=e){
		temp.push_back(array[j++]);
	}

	//copy back the eleemtns from temp to original array
	int k1 = 0 ;
	for(int idx = s; idx <=e ;idx++){
		array[idx] = temp[k1++];
	}
	return crossCount;
}

//sorting method
int invCount(vector<int> &arr,int s,int e){
	//base case
	if(s>=e){
		return 0;
	}
	//rec case
	int mid = (s+e)/2;
	int c1 = invCount(arr,s,mid);
	int c2 = invCount(arr,mid+1,e);
	int c3 =  merge(arr,s,e);
    return c1+c2+c3;
}

int main(){
  	
  	vector<int> arr{10,5,2,0,7,6,4};

	int s = 0;
	int e = arr.size()-1;
  	int ans = invCount(arr,s,e);
	// for(int x : arr){
	// 	cout<< x <<",";
	// }
	cout<<ans<<endl;
	return 0;
}




