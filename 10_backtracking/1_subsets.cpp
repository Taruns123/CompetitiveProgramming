#include<bits/stdc++.h>
using namespace std;

void genSubset(char * input, char* output,int i, int j){
    if(input[i]=='\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }
    
    output[j] = input[i];
    genSubset(input,output, i+1, j+1);
    genSubset(input,output, i+1, j);
    return;
}

int main(int argc, char const *argv[])
{

    char input[100];
    char output[100];

    cin>>input;

    genSubset(input, output,0,0);
    return 0;

}