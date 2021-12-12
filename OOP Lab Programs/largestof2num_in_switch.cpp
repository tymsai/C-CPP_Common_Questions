#include<iostream>
using namespace std;
class Large{
    int a, b;
    public:
    int func(){
        cout<<"Enter the two numbers\n";
        cin>>a>>b;
        switch(a>b){
            case 1:
                return a;
                break;
            case 0:
                return b;
                break;
            default:
                break;
        }
    }
};
int main(){
    Large obj;
    cout<<"Largest number : "<<obj.func();
    return 0;
}
