#include<iostream>
using namespace std;
class Sum{
    int sum=0;
    public:
    int func(){
        for(int i=1; i<101; i++){
            sum=sum+i;
        }
        return sum;
    }
};
int main(){
    Sum obj;
    cout<<"Sum of all natural numbers (1-100) : "<<obj.func();
    return 0;
}
