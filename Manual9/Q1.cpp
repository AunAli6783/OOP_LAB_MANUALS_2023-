//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual char* speak() {
//        return "speak() called.";
//    }
//};
//
//class Dog : public Animal {
//public:
//    char* speak() override {
//        return "woof!";
//    }
//};
//
//class Sheep : public Animal {
//public:
//    virtual  char* speak() override {
//        return "bleat";
//    }
//
//    ~Sheep() override {
//        cout << "~Sheep() called." << endl;
//    }
//};
//
//class Cow : public Animal {
//public:
//    char* speak() override {
//        return "moo";
//    }
//
//    ~Cow() override {
//        cout << "~Cow() called." << endl;
//    }
//};
//
//class Horse : public Animal {
//public:
//    char* speak() override {
//        return "neigh";
//    }
//
//    ~Horse() override {
//        cout << "~Horse() called." << endl;
//    }
//};
//
//int main() {
//    Animal objAnimal;
//    Dog objDog;
//    Animal* ptrAnimal = &objAnimal;
//    Dog* ptrDog = &objDog;
//
//    cout << objAnimal.speak() << endl;
//    cout << objDog.speak() << endl;
//    cout << ptrAnimal->speak() << endl;
//    cout << ptrDog->speak() << endl;
//
//    // Modify the last line to use the base class definition from the derived class
//    cout << ptrDog->Animal::speak() << endl;
//
//    return 0;
//
//
//    //int main() {
//    //    Animal objAnimal;
//    //    Dog objDog;
//    //    Animal* ptrAnimal = &objDog; // Now pointing to an object of Dog
//    //    Dog* ptrDog = &objAnimal; // Compilation error
//
//    //    // Print the error message
//    //    // cout << ptrDog->speak() << endl;
//
//    //    return 0;
//    //}
//
//
//
//   /* int main() {
//        const int size = 5;
//        Animal* myPets[size];
//
//        int i = 0;
//        while (i < size) {
//            cout << "Press 1 for a Dog and 2 for a Cat." << endl;
//            switch (getch()) {
//                case '1':
//                    myPets[i] = new Dog;
//                    cout << "Dog added at position " << i << endl << endl;
//                    i++;
//                    break;
//                case '2':
//                    myPets[i] = new Cat;
//                    cout << "Cat added at position " << i << endl << endl;
//                    i++;
//                    break;
//                default:
//                    cout << "Invalid input. Enter again." << endl << endl;
//                    break;
//            }
//        }
//
//        for (int i = 0; i < size; i++) {
//            cout << myPets[i]->speak() << endl;
//            delete myPets[i];
//        }
//
//        return 0;
//    }*/
//
////}
//
