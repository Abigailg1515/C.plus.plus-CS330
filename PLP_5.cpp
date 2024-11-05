#include <iostream>
#include <string>

//Define the Person class with attributes and functions
class Person {
protected: //Protected allows derived classes access
    std::string name;
    int age;

public:
    //Constructor for Person
    Person(std::string n, int a) : name(n), age(a) {}

    //Function to get the name
    std::string getName() const {
        return name;
    }

    //Function to set the name
    void setName(const std::string& newName) {
        name = newName;
    }

    //Function to get the age
    int getAge() const {
        return age;
    }

    //Function to set the age
    void setAge(int newAge) {
        age = newAge;
    }

    //Function to display details of the Person
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

//Define the Student class that inherits from Person
class Student : public Person {
private:
    int studentID;
    std::string major;

public:
    //Constructor for Student, initializing the Person part using the Person constructor
    Student(std::string n, int a, int id, std::string m) : Person(n, a), studentID(id), major(m) {}

    //Function to get the student ID
    int getStudentID() const {
        return studentID;
    }

    //Function to set the student ID
    void setStudentID(int newID) {
        studentID = newID;
    }

    //Function to get the major
    std::string getMajor() const {
        return major;
    }

    //Function to set the major
    void setMajor(const std::string& newMajor) {
        major = newMajor;
    }

    //Function to display details of the Student
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << ", Major: " << major << std::endl;
    }
};

//Test the classes
int main() {
    //Instantiate a Person object
    Person person1("Bobkoblin", 30);
    std::cout << "Person details:" << std::endl;
    person1.display();

    // Modify Person's attributes
    person1.setName("Koblin");
    person1.setAge(31);
    std::cout << "Updated Person details:" << std::endl;
    person1.display();

    //Instantiate a Student object (inherits from Person)
    Student student1("Moonbeam", 20, 12345, "Computer Science");
    std::cout << "\nStudent details:" << std::endl;
    student1.display();

    //Modify Student's attributes
    student1.setName("Beams");
    student1.setAge(21);
    student1.setStudentID(67890);
    student1.setMajor("Mathematics");
    std::cout << "Updated Student details:" << std::endl;
    student1.display();

    return (0);
}
