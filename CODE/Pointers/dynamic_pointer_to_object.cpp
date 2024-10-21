#include <iostream>  
class MyClass {  
public:  
    int data;  
MyClass(int value) : data(value) {}  
    void display() {  
std::cout<< "Data: " << data << std::endl;  
    }  
};  
//Function to modify the object's data using a pointer  
void modifyObject(MyClass *ptr, int newValue) {  
ptr->data = newValue;  
}  
int main() {  
    // Creating an object and a pointer to the object  
MyClass *objPtr = new MyClass(42);  
    // Accessing object's member through the Pointer  
objPtr->display();  
    // Dereferencing the Pointer to access the object directly  
MyClass obj = *objPtr;  
obj.display();  
    // Modifying object's member through the Pointer  
modifyObject(objPtr, 99);  
objPtr->display();  
    // Deleting the dynamically allocated object  
    delete objPtr;  
    // Creating an array of pointers to objects  
MyClass *objArray[3];  
    for (int i = 0; i< 3; ++i) {  
objArray[i] = new MyClass(i * 10);  
    }  
    // Accessing objects in the array of pointers  
    for (int i = 0; i< 3; ++i) {  
objArray[i]->display();  
    }  
    // Deleting dynamically allocated objects from the array  
    for (int i = 0; i< 3; ++i) {  
        delete objArray[i];  
    }  
    return 0;  
} 