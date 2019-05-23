#ifndef VECTOR10_H__
#define VECTOR10_H__

class Vector10 {
public:
    // constructor
    Vector10();

    //deconstructor
    ~Vector10();
    
    // return value at index of array
    int ValueAt(int index);

    // puts value in the last empty spot of array
    bool PushBack(int value);

    // this member function returns number of empty spaces left in the array
    int CountEmpty();
    
    // this function searches the value in the array and returns if value exists
    // and returns false otherwise
    bool Search(int value);

    // this function removes a value from array. (removal process includes 
    // shifting valid member on its right hand side to the left by one index)
    bool Remove(int index);

    // add more public member variables and member functions here if you need

private:
    int arr[10];
    // add more private member variables and member functions here if you need
};

#endif  // VECTOR10_H__