#include "linkedList.h"

int main() {

    List myList;
    int number, data, index;

    while (true) {
        std::cout << "1. Push front" << std::endl;
        std::cout << "2. Push back" << std::endl;
        std::cout << "3. Add at" << std::endl;
        std::cout << "4. Remove by value" << std::endl;
        std::cout << "5. Remove by index" << std::endl;
        std::cout << "6. Find by value" << std::endl;
        std::cout << "7. Find by index" << std::endl;
        std::cout << "8. Print" << std::endl;
        std::cout << "9. Size" << std::endl;
        std::cout << "10. Exit" << std::endl;
        std::cout << "Please, enter your command: ";
        std::cin >> number;

        switch (number) {

            case 1:
                std::cout << "Enter your value ";
                std::cin >> data;
                myList.push_front(data);
                break;

            case 2:
                std::cout << "Enter your value ";
                std::cin >> data;
                myList.push_back(data);
                break;

            case 3:
                std::cout << "Enter the index ";
                std::cin >> index;
                std::cout << "Enter your value ";
                std::cin >> data;
                myList.insert(data, index);
                break;

            case 4:
                std::cout << "Enter the value of element you want to delete ";
                std::cin >> data;
                myList.remove(data);
                break;

            case 5:
                std::cout << "Enter the index of element you want to delete ";
                std::cin >> index;
                myList.removeAt(index);
                break;

            case 6:
                std::cout << "Enter the value of element you want to find ";
                std::cin >> data;
                myList.find(data);
                break;

            case 7:
                std::cout << "Enter the index of element you want to find ";
                std::cin >> index;
                myList[index];
                break;

            case 8:
                myList.printElements();
                break;

            case 9:
                std:: cout<< "Size of the list is: " << myList.getSize() << std::endl;
                break;

            case 10:
                return 0;

            default:
                std::cout << "There is no such command ";
                break;
        }

        }
}
