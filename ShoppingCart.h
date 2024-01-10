#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <map>
#include "Product.h"

class ShoppingCart {
public:
    void addProduct(const Product& product, int quantity);
    double calculateTotal() const;

private:
    std::map<Product, int> products;
};

#endif // SHOPPINGCART_H
