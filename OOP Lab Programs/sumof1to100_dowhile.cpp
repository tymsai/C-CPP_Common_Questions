#include<iostream>
using namespace std;
class Sum{
    int sum=0, i=1;
    public:
    int func(){
        do{
            sum+=i;
            i++;
        }
        while(i<101);
        return sum;
    }
};
int main(){
    Sum obj;
    cout<<"Sum of all natural numbers (1-100) : "<<obj.func();
    return 0;
}
