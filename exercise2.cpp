#include<iostream>
using namespace std;

class bankAccount {
    private :
    int accountNumber;
    string accountHolder;
    double balance;

    public : 
    bankAccount(int accountNumber, string accountHolder, double balance) {
        this -> accountNumber = accountNumber;
        this -> accountHolder = accountHolder;
        this -> balance = balance;
    }


    
    void display(){
        cout << "Account number: "<< accountNumber << endl
        << "Account holder: "<< accountHolder <<endl
        << "Acount balance: "<< balance<< endl;
        cout << endl;
    
    };

    void deposit(double balance){
        this -> balance += balance;
    }

    void withdraw(double balance){
        this -> balance -= balance;
    }

    double getBalance(){
        return balance;
    }
};

void findRichestAccount(bankAccount person1Balance, bankAccount person2Balance,bankAccount person3Balance){
  bankAccount richest = person1Balance;

  if (richest.getBalance() <= person2Balance.getBalance()){
    richest = person2Balance;
  }

  if (richest.getBalance() <= person3Balance.getBalance()){
    richest = person3Balance;
  }
  cout << "The richest is: "<< endl ;
  richest.display();
}
     

int main(){
    bankAccount person1(111,"Julian",100.44);
    bankAccount person2(222,"Leo",200.99);
    bankAccount person3(333,"Haya",130.85);
    person1.display();
    person2.display();
    person3.display();

    cout << "After deposit: "<< endl;
    person1.deposit(500);
    person1.display();

    cout << "After withdraw: "<< endl;
    person1.withdraw(500);
    person1.display();

  findRichestAccount(person1,person2,person3);


    
    return 0;
}