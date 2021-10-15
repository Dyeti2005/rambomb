#include <iostream>
#include <list>

using namespace std;

class s{
    public:
    void funcion();
};

void s::funcion(){
    cout<<"hello world"<<endl;
    funcion();
}

int main(){
    list<s*> data;
    list<s*>::iterator it;
    
    while(true){
    data.push_back(new s());
    for(it = data.begin(); it != data.end(); it++){
        (*it)->funcion();
    }
    }
}