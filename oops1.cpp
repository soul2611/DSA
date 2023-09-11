#include<iostream>
using namespace std;

class Fruit{
    public:
           string name;
           string color;

};


int main(){
    
    Fruit apple;
    apple.name= "Aniket";
    apple.color= "red";

    Fruit *mango = new Fruit();
    mango->name = "Mango";
    mango->color = "Yellow";

    cout<<apple.name<<" - "<<apple.color<<endl;
    cout<<mango->name<<" - "<<mango->color<<endl;
 

     return 0;


}     