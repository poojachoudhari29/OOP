#include <iostream>
#include <cstring>
using namespace std;
class product
{
protected:
    float prod_id, gst, discount, productprice, stock;
    string name;

public:
    product()
    {
        prod_id = 0;
        gst = 0;
        discount = 0;
        productprice = 0;
        stock = 0;
    }
    product(string name, float prod_id, float gst, float discount, float productprice, float stock)
    {
        this->prod_id = prod_id;
        this->name = name;
        this->gst = gst;
        this->discount = discount;
        this->productprice = productprice;
        this->stock = stock;
    }
    void setdata()
    {
        int a, b, c, d, e, choice;
        string n;

        while (1)
        {
            cout << "Give the choice to change" << endl;
            cout << "1-name  2-id  3-gst  4-discount  5-price  6-stock 7-exit" << endl;
            cin >> choice;
            if (choice == 1)
            {

                cout << "Give the product name" << endl;
                cin >> n;

                name = n;
            }
            else if (choice == 2)
            {
                cout << "Give the id product " << endl;
                cin >> a;

                prod_id = a;
            }
            else if (choice == 3)
            {
                cout << "Give the gst of product " << endl;
                cin >> b;
                gst = b;
            }
            else if (choice == 4)
            {
                cout << "Give the discount on product " << endl;
                cin >> c;
                discount = c;
            }
            else if (choice == 5)
            {
                cout << "Give the price of product " << endl;
                cin >> d;
                productprice = d;
            }
            else if (choice == 6)
            {
                cout << "Give the stock of product " << endl;
                cin >> e;
                stock = e;
            }
            else if (choice == 7)
            {
                break;
            }
        }
    }
    void getdata()
    {
        cout << "The product name is " << name << endl;
        cout << "The product id is " << prod_id << endl;
        cout << "The product price is " << productprice << endl;
        cout << "The gst on product is " << gst << endl;
        cout << "The discount on product is " << discount << endl;
        cout << "The stock of this product is " << stock << endl;
    }
};
class purchased_product : public product
{
protected:
    int quantity;

public:
    float gst1, discount1, final_price;
    purchased_product(string name, float prod_id, float gst, float discount, float productprice, float stock)
    {

        this->prod_id = prod_id;
        this->name = name;
        this->gst = gst;
        this->discount = discount;
        this->productprice = productprice;
        this->stock = stock;
    }

    void setquantity()
    {
        int q;
        cout << "Give the quantity you want to buy" << endl;
        cin >> q;
        quantity = q;
    }
    void calculategst()
    {

        gst1 = productprice * (gst / 100);
        gst1 = gst1 * quantity;
    }
    void calculatediscount()
    {

        discount1 = productprice * (discount / 100);
        discount1 = discount1 * quantity;
    }
    void calculateprice()
    {

        final_price = (productprice * quantity) + gst1 - discount1;
    }

    void display()
    {

        cout << "The total gst price is " << gst1 << endl;
        cout << "The total discount price is " << discount1 << endl;
        cout << "The final price is " << final_price << endl;
    }
};
int main()
{
    // product s("vim", 1001, 18, 10, 50, 6);
    purchased_product s2("vim", 1001, 18, 10, 50, 6);
  //  s2.setdata();
    s2.getdata();
    s2.setquantity();
    s2.calculategst();
    s2.calculatediscount();
    s2.calculateprice();
    s2.display();

    return 0;
}