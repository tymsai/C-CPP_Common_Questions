#include<iostream>
using namespace std;
int main(){
    int old=0,ft=1,new_nummber=0,i, sno=10;
    cout<<"Enter the number to get fibonacci series";
    cin>>sno;
    for(i=0;i<sno;++i){    
    new_nummber=old+ft;    
    cout<<new_nummber<<" ";    
    old=ft;    
    ft=new_nummber;    
    }  
    return 0;   
}
// 1 2 3 5 8 13 21 34 55 89
