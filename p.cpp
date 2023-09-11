#include<iostream>

using namespace std;
#include<cstring> 
class Hero{
    public:  
    int health;
    char level;
    char name[100];
    static int time_to_complete; 
    Hero(){
        cout<<"Hero constructor called"<<endl;
        }
    Hero(int health,char level){
        this->health = health;
        this->level = level;
        
    }
    int gethealth(){
        int health;
        return health;
    }
    void sethealth(int h){
           int health;
           health = h;      
    }
    char getlevel() {
        char level;
        return level;
    }
    void setlevel(char ch) {
        char level;
        level = ch;
    }
    void  setname(char name[]) {
        
        strcpy(this->name, name);
    }
    void print(){
        cout<<"Health :" <<this->health<<endl;
        cout<<"Level : "<<this->level<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout <<endl<<endl;
    }
    ~Hero () {
        cout<<"Destructor Bhai is Called"<<endl;
    }

};

int  Hero :: time_to_complete=5;
int main() {
cout<<Hero::time_to_complete<<endl;    
Hero amit(78,'A');
amit.print();
amit.sethealth(80);
amit.setlevel('c');
Hero aniket(10,'B');
cout<<aniket.gethealth();
cout<< "Address of aniket is : " <<&aniket<<endl;
Hero p1;
Hero raghav(aniket);
Hero *o = new Hero;
raghav.print();
Hero hero1;
hero1.sethealth(99);
hero1.setlevel('X');
char name [20] = "Raghav Ojha"; 
hero1.setname(name);
hero1.print();


return 0;   
}