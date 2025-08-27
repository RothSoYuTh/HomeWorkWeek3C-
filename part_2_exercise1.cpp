#include<iostream>
using namespace std;
    void out(int array[],int size){
        for(int i = 0; i < size ;i++){
        cout << array[i] << " ";
     }
     cout << endl;
    }

int main (){
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* array = new int[size];
    cout << "Enter numbers to sort in decending order: ";
    for(int i=0; i<size;i++){
        cin >> array[i];
    }

    cout << "Before sort: "<<endl;
    out (array, size);
    

     cout << "After being sorted: "<< endl;
      for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    out(array,size);


    
   

    return 0;
}

//big O is O(n^2)