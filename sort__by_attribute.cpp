#include<iostream>
using namespace std;

    class student {
        private: 
        string id;
        string name;
        double score;

        public:
        // student(int id,string name,double score){
        //   this->id = id;
        //   this -> name =   name;
        //   this->score = score;
          
        // };

        student (string idC, string nameC, double scoreC){
          id= idC;
          name= nameC;
          score = scoreC;
        };

     void display(){
            cout << "id: " <<id << endl
            <<"name: "<< name<<endl
            << "score: " << score<< endl;
          };

    void setScore(double scoreSet){
      score = scoreSet;
    };

    double getScore(){
      return score;
    };
     

};

 void findTopStudent(student s1,student s2, student s3){
     student top = s1;
     if(top.getScore()<= s2.getScore()){
      top = s2;
     }
      if(top.getScore()<= s3.getScore()){
      top = s3;
     }
      cout<< "Top student: "<< endl;
      top.display();
    }


void sortInDecendingOrder(student arr[], int size){
    for (int i=0;i<size-1; i++){
         for (int j=0;j<size-i-1; j++){
            if(arr[j].getScore() < arr[j+1].getScore()){
                student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main (){
    student s1("0001","Petter",5.64);
    student s2("0002","Kant",9.57);
    student s3("0003","Sun tzu",8.47);
    s1.display();
    s2.display();
    s3.display();
    s1.setScore(1.11);
    cout <<"Updated information: "<<endl;
    s1.display();
    findTopStudent(s1,s2,s3);
    student students[] = {s1, s2, s3};
    cout << "After sorted: "<< endl;
    sortInDecendingOrder(students ,3);

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

  
    return 0;
}