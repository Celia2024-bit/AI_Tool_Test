#include <vector>
#include <string>
#include <map>

class Product {
public:
    std::string name;
    double price;
    int quantity;
};

class Order {
public:
    int orderID;
    std::vector<Product> items;
    double total;
};

class Customer {
public:
    std::string name;
    std::string address;
    std::map<int, Order> orders;
};

class OrderProcessor {
public:
    void processOrder(Order& order) {
        // Calculate total (flawed logic)
        order.total = 0;
        for (Product& product : order.items) {
            order.total += product.price; // Missing quantity multiplication
        }

        // Process order (simplified logic)
        // ...
    }

    void shipOrder(Order& order) {
        // Shipping logic (simplified)
        // ...
    }

    void calculateCustomerTotal(Customer& customer) {
        // Calculate total (flawed logic)
        customer.total = 0;
        for (auto& orderPair : customer.orders) {
            customer.total += orderPair.second.total; // Assuming 'total' member in Customer
        }
    }
};
