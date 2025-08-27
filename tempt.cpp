#include<iostream>
using namespace std;

class person {
    private:
    string name;
    int age;

    public:
    

    person(){ name = "Unknown";
              age = 0;        
    };
    person(string name,int age){
        this->name = name;
        this->age = age;
    };
    void print(){
        cout <<"Name: "<< name <<", "<<"Age: "<< age << endl;
   
    }





};
int main (){
    person p1;
    p1.print();
    person p2("Alice",20);
    p2.print();

    
   

    return 0;
}



#include<iostream>
using namespace std;


int main (){
    int array[10] = {1,5,3,4,8,7,5,9,7,2};
    cout << "Before sort: "<<endl;
     for(int i=0;i<10;i++){
        cout << array[i];
     }


    
   

    return 0;
}