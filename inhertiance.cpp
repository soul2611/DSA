#include <iostream>
using namespace std;
class aniket{
    public:
        int x;
    private:
        int z;
    protected:
        int y;        

};
class child1: public aniket{
    //x will remain public 
    //y will remain protected
    //z will not be accessible 

};
class child2: private aniket{
    //x will be private
    //y will be private
    //z will not be accessible 
};
class child3: protected aniket{
       //x will be protected
       //y will be protected
       // z will not be accessible 
};
int main() {

       aniket p;
       p.x;






    return 0;
}