#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int height;
    int weight;
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog: public Animal{
        int color;

};
int main(){

    Dog d;
    d.age= 45;
    cout<<"Age of the Dog is "<<d.age<<endl;
    d.speak();
    return 0;
}
