#include<bits/stdc++.h>
using namespace std;
class product{
    int id;
    char name[20];
    int price;
    int gst;
    int inventory;
    int discount;
    public:
    product();
    ~product(){}
    void getdata();
    void display(int);
    int search(char[]);
    
    
};
product::product(){}
void product ::getdata(){
    cout<<"\nEnter id, name, price, GST,inventory and discount of product :";
    cin>>id>>name>>price>>gst>>inventory>>discount;
}


int product::search(char name1[]){
    if(strcmp(name,name1)) return 0;
    return 1;
}
void product ::display(int j)
{
    
    cout<<j<<right<<setw(20)<<id<<setw(25)<<name<<setw(15)<<price<<setw(15)<<gst;
    cout<<setw(15)<<discount<<setw(15)<<inventory<<endl;
}
int main(){
    product P[100];
    int ch=4,i=0,r,c,j,cnt=0;
    char name1[20];

    while (ch)
    {
        cout<<"\n0.Exit\t1.Insert\t2.Delete\t3.Search\n4.Display";
        cout<<"\nEnter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 0: cout<<"\nExited";
            break;
        case 1: P[cnt].getdata();
                cnt++;
                break;
        case 2: cout<<"\nEnter SR no. of product :";
                cin>>r;
                if(r>cnt){
                    cout<<"\nEnter valid SR no.";
                    break;
                }
                for(j=r-1;j<cnt;j++) P[j]=P[j+1];
                cout<<"\nProduct deleted successfully..";
                cnt--;
                break;
        case 3: cout<<"\nEnter name of product :";
                cin>>name1;
                for(i=0;i<cnt;i++){
                    r=P[i].search(name1);
                    if(r==1){
                        cout<<"\nProduct found at index "<<i;
                        r=-1;
                        break;
                    }

                }
                if(r!=-1) cout<<"\nProduct not found";
                break;        
        case 4: cout<<endl;
                cout<<"SR No."<<right<<setw(15)<<"ID"<<setw(25)<<"Name"<<setw(15)<<"price(Rs)"<<setw(15)<<"gst(%)";
                cout<<setw(15)<<"discount"<<setw(15)<<"Inventory"<<endl<<endl;
                for(c=0;c<cnt;c++)
                P[c].display(c+1);
                break;        
        default: cout<<"\nEnter valid choice...";
            break;
        }
    }
    for(int s=0;s<cnt;s++){
        P[s].~product();
    }
    return 0;
}