#include<iostream>
using namespace std;
class Large{
    int a, b, c;
    public:
    int func(){
        cout<<"Enter the three numbers\n";
        cin>>a>>b>>c;
        switch(a>b){
            case 1:
                switch(a>c)
                    case 1:
                        return a;
                        break;
            case 0:
                switch(b>c){
                    case 1:
                        return b;
                        break;
                    case 0:
                        return c;
                        break;
                }
        }
    }
};
int main(){
    Large obj;
    cout<<"Largest number : "<<obj.func();
    return 0;
}
