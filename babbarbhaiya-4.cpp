//Multilevel Inhertiance
#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int height;
    int weight;
    void speak(){
        cout<<"Speaking."<<endl;
    }
};
class Dog: public Animal{
        public:
        string color;
};
class GermanShepherd: public Dog {
        public:
        string eyecolor;
};
int main(){

   GermanShepherd g;
   g.age;
   g.speak();

return 0;
}