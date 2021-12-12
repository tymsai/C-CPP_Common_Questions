#include<iostream>
using namespace std;
class Sum{
    int sum=0, i=1;
    public:
    int func(){
        while(i<101){
            sum+=i;
            i++;
        }
        return sum;
    }
};
int main(){
    Sum obj;
    cout<<"Sum of all natural numbers (1-100) : "<<obj.func();
    return 0;
}
