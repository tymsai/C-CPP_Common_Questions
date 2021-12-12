#include<iostream>
using namespace std;
class Large{
    int a, b, c, d;
    public:
    int func(){
        cout<<"Enter the four numbers\n";
        cin>>a>>b>>c>>d;
        switch(a>b && a>c && a>d){
            case 1:
            return a;
            break;
        }
        switch(b>a && b>c && b>d){
            case 1:
            return b;
            break;
        }
        switch(c>a && c>b && c>d){
            case 1:
                return c;
                break;
            case 0:
                return d;
                break;
        }
    }
};
int main(){
    Large obj;
    cout<<"Largest number : "<<obj.func();
    return 0;
}
