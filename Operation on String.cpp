#include <bits/stdc++.h>
using namespace std;
string str;
deque<char>front;
vector<char>back;

void print(){
    for(auto c:front){
        cout<<c;
    }
    cout<<str;
    for(auto c:back){
        cout<<c;
    }
    cout<<"\n";
}

void reverse_print(){
    
    int siz=back.size();
    for(int i=siz-1;i>=0;i--){
        cout<<back[i];
    }
    int len=str.length();
    for(int i=len-1;i>=0;i--){
        cout<<str[i];
    }
    for(auto i=front.rbegin();i!=front.rend();i++){
        cout<<*i;
    }
    cout<<"\n";
}
     
int main() {
     
     cin>>str;
     int q;cin>>q;
     bool f=0;
     while(q--){
        int t;cin>>t;
        if(t==1){
           f=(f==0?1:0);
        }
        else{
            int x;cin>>x;
            char ch;cin>>ch;
            if((f==1 && x==1)||(f==0 && x==2)){
                back.push_back(ch);
            }
            else{
                front.push_front(ch);
            }
            
        }
     } 
     if(f){
        reverse_print();
     }
     else{
        print();
     }
   

    return 0;
}
