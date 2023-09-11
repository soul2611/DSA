#include<iostream>
using namespace std;
class Sum{
    public:
          void add(int x, int y){
          cout<<"Sum of "<<x<<"+"<<y<<"="<<(x+y)<<endl;
    }
          void add(int x,int y,int z){
            cout<<"Sum of "<<x<<","<<y<<","<<z<<"="<<(x+y+z)<<endl;
          }   
          void add(float x, float y){
               cout<<"Sum of "<<x<<"+"<<y<<"="<<(x+y)<<endl;
          }
};





int main(){
         Sum s;
         s.add(10,25);
         s.add(10,20,30);
         s.add(float(10.3),float(20.4));


    return 0;
}