#include "ShoppingCart.h"

void ShoppingCart::addProduct(const Product& product, int quantity) {
    products[product] += quantity;
}

double ShoppingCart::calculateTotal() const {
    double total = 0;
    for (const auto& pair : products) {
        total += pair.first.getPrice() * pair.second;
    }
    return total;
}
