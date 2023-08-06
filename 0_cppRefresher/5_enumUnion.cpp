#include<bits/stdc++.h>
using namespace std;


union money{
    int rice;
    char car;
    int salary;
};

int main(int argc, char const *argv[])
{

    money myMoney;
    myMoney.rice = 23;
    myMoney.car = 'b';
    cout<<myMoney.rice<<endl;// will print garbage value since memory of rice is overriden by car
    cout<<myMoney.car<<endl;

    // union is used only when one of the parameters i.e either rice or car or salary is needed
    // the memory allocated is max of all of the variables in the union defined;
    
//////////////possible values of datatype Meal///
    enum Meal{breakfast,lunch,dinner,brunch,snacks};
    Meal m1 = dinner; 
    cout<<m1<<endl; // prints index of the output in the enum defination i.e 2 in this case

    return 0;

}