//Design a shopping cart system woth classes of products ,cart, and user Implement features like adding / removing items in cart calculate the total cost.
//Many more changes need to be done and will be done :)
#include <iostream>
#include <string>
using namespace std;

#define MAX_PRO 10

class product {
private:
    int price;
    string name;
    int quantity;

public:
    void setname(string n) {
        name = n;
    }
    void setprice(int x) {
        price = x;
    }
    void setquantity(int x) {
        quantity = x;
    }
    string getname() {
        return name;
    }
    int getprice() {
        return price;
    }
    int getquantity() {
        return quantity;
    }
};

class cart {
private:
    product pro[MAX_PRO];
    int count;

public:
    cart() {
        count = 0;
    }
    void addproduct(product p) {
        if (count < MAX_PRO) {
            pro[count] = p;
            count++;
        } else {
            cout << "Cart is full\n";
        }
    }
    void removeproduct(string n) {
        for (int i = 0; i < count; i++) {
            if (pro[i].getname() == n) {
                for (int j = i; j < count - 1; j++) {
                    pro[j] = pro[j + 1];
                }
                count--;
                cout << "PRODUCT DELETED SUCCESSFULLY.......\n";
                break;
            }
        }
    }
    int totalprice() {
        int pr = 0;
        for (int i = 0; i < count; i++) {
            pr += pro[i].getprice() * pro[i].getquantity();
        }
        return pr;
    }
};

class user {
private:
    string username;
    cart userCart;

public:
    void setname(string n) {
        username = n;
    }
    void addtocart(product p, int x) {
        p.setquantity(x);
        userCart.addproduct(p);
    }
    void removefromcart(string n) {
        userCart.removeproduct(n);
    }
    int totalcost() {
        return userCart.totalprice();
    }
};

int main() {
    product p1, p2;
    p1.setname("apple");
    p1.setprice(10);
    // p1.setquantity(10);
    p2.setname("mango");
    p2.setprice(20);
    // p2.setquantity(11);

    user user1;
    user1.setname("Siddhant");
    user1.addtocart(p1, 1);
    user1.addtocart(p2, 2);

    cout << "Total cost: " << user1.totalcost() << endl;

    user1.removefromcart(p1.getname());
    cout << "Total cost after removing Product 1: " << user1.totalcost() << endl;
}
