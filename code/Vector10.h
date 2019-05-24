#ifndef VECTOR10_H__
#define VECTOR10_H__

class Vector10 {
public:
    // constructor, you should set all values in array to zero
    Vector10();

    //deconstructor, you don't need to add anything here
    ~Vector10();
    
    // get an index return the value of array at that index
    int ValueAt(int index);

    // puts value in the last empty spot of array (back)
    // data in array is always left alligned. check class video for details
    bool PushBack(int value);

    // this member function returns number of empty spaces left in the array
    int CountEmpty();
    
    // this function searches the value in the array and returns if value exists
    // and returns false otherwise
    bool Search(int value);

    // this function removes a value from array. (removal process includes 
    // shifting valid member on its right hand side to the left by one index)
    // check class video for details.
    bool Remove(int index);

    // you can add more public member variables and member functions here if you need

private:
    int arr[10];
    int pb_index;
    // you can add add more private member variables and member functions here if you need
};

#endif  // VECTOR10_H__