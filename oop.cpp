#include <iostream>

class id{
public: 
    std::string name = "wael";
    std::string code;
    int age;
    id(std::string name="", std::string code="", int age=0){
        this->name = name;
        this->code = code;
        this->age = age;
    }
};

int main(){
    int size;
    std::cout << "Enter the size of the database: ";
    std::cin >> size;

    id *students = new id[size];
    std::string name;
    std::string code;
    int age;
    for (int i = 0; i < size; i++){
        std::cout << "Enter student #" << i + 1 << "'s name: ";
        std::cin >> name;
        std::cout << "Code: ";
        std::cin >> code;
        std::cout << "Age: ";
        std::cin >> age;
        students[i] = id(name, code, age);
        std::cout << "\n";
    }
    std::cout << "\n\n";
    for (int i = 0; i < size; i++){
        std::cout << "Student #" << i + 1 << ":\n";
        std::cout << "Name: " << students[i].name << "\n";
        std::cout << "Code: " << students[i].code << "\n";
        std::cout << "Age: " << students[i].age << "\n";
    }

    delete[] students;
    return 0;
}