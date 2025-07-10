
#include <iostream>
#include <vector>
using namespace std;

class CashRegister {
private:
    vector<double> items;

public:
    void clear() {
        items.clear();
    }

    void add_item(double price) {
        items.push_back(price);
    }

    double get_total() const {
        double total = 0;
        for (double price : items) {
            total += price;
        }
        return total;
    }

    int get_count() const {
        return items.size();
    }

    void display_all() const {
        cout << "Items:" << endl;
        for (double price : items) {
            cout << "$" << price << endl;
        }
    }
};

int main() {
    CashRegister cart;

    cart.add_item(3.29);
    cart.add_item(7.79);
    cart.add_item(1.25);
    cart.add_item(4.50);

    cart.display_all();

    cout << "Total: $" << cart.get_total() << endl;
    cout << "Item count: " << cart.get_count() << endl;

    cart.clear();
    cout << "\nCart cleared.\n";
    cout << "Items after clear: " << cart.get_count() << endl;

    return 0;
}
