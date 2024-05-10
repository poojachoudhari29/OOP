#include <iostream>

using namespace std;
int count = 0;
struct product
{
    int product_id, product_price, gst;
    string product_name;

} s[20];
void insert_at(int pos, struct product s[])
{
    string name;
    int gst, price, id;
    cout << "Give the name of product" << endl;
    cin >> name;
    cout << "Give the id of product" << endl;
    cin >> id;
    cout << "Give the price of product" << endl;
    cin >> price;
    cout << "Give the gst on this product" << endl;
    cin >> gst;
    if (count == 0)
    {
        s[0].product_name = name;
        s[0].product_id = id;
        s[0].product_price = price;
        s[0].gst = gst;
        count++;
    }
    else if (count != 0 && pos >= count)
    {
        s[count].product_name = name;
        s[count].product_id = id;
        s[count].product_price = price;
        s[count].gst = gst;
        count++;
    }
    else if (count != 0 && pos < count)
    {
        int count1 = count;
        for (int i = 0; i < count - 1; i++)
        {
            s[count1] = s[count1 - 1];
            count1--;
        }
        s[pos].product_name = name;
        s[pos].product_id = id;
        s[pos].product_price = price;
        s[pos].gst = gst;
        count++;
    }
}

void delete_at(int j)
{
    if (j >= count - 1)
    {
        count--;
    }
    else if (j < (count - 1))
    {
        int c = count;
        for (int i = 0; i < (count - 2); i++)
        {
            s[j + 1] = s[j + 2];
            j++;
        }
        count--;
    }
}
void serach(string name)
{
    for (int i = 0; i < count; i++)
    {
        if (s[i].product_name == name)
        {
            cout << "Match found !!! at index  " << i << endl;
            break;
        }
    }
}

void display(struct product s[])
{
   cout<<"Product name   "<<"product id  "<<"produnt price  "<<"Gst  "<<endl;
    for (int i = 0; i < count; i++)
    {
        cout << s[i].product_name << "        ";
        cout << s[i].product_id << "      ";
        cout << s[i].product_price << "          ";
        cout << s[i].gst << endl;
    }
}

int main()
{
int choice,position;
string name;
  while (1)
  {
      cout<<"Give the choice"<<endl;
      cout<<"1-inseart_at "<<"2-delete_at"<<"3-saerch "<<"4-display"<<endl;
      cin>>choice;
      if (choice==1)
      {
          cout<<"Give the position"<<endl;
          cin>>position;
          insert_at(position,s);
      }
      else if (choice==2)
      {
          cout<<"Give the position"<<endl;
          cin>>position;
          delete_at(position);
      }
      else if (choice==3)
      {
         cout<<"Give product name to search"<<endl;
         cin>>name;
         serach(name);
      }
      else if (choice==4)
      {
         display(s);
         break;
      }
      
      
      
      
  }
  
    return 0;
}