#include<bits/stdc++.h>
using namespace std;

class Person{
    char person_name[20];
    int ID;
    public:
        Person(){}
        void set_name(char []);


};

void Person::set_name(char name[]){
    strcpy(person_name,name);

    try
    {
        if(strlen(person_name)==0) throw name;
        else{
            cout<<"\n Name of person is : "<<person_name;
        }
    }
    catch(char name[])
    {
        cout<<"\nDo not enter empty name.....";
    }
}
int main(){
    Person p;
    char s[] = "s";
    p.set_name(s);
}