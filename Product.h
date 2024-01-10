#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string& name, double price);

    std::string getName() const;
    double getPrice() const;

private:
    std::string name;
    double price;
};

#endif // PRODUCT_H
