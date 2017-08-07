#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item copies;

    if (std::cin >> copies){
        Sales_item curItem;
        while (std::cin >> curItem){
            if (copies.isbn() == curItem.isbn()){
                copies = copies + curItem;
            }
            else {
                std::cout << copies << std::endl;
                copies = curItem;
            }
        }
        std::cout << copies << std::endl;
    }
    else {
        return -1;
    }

    return 0;
}