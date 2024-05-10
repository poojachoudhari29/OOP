#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string person_name;
    Person(string name)
    {
        person_name = name;
    }
    Person(){}
    ~Person() {}
    string get_name()
    {
        return person_name;
    }
    void set_name(string name)
    {
        person_name = name;
    }
};

class Engine
{
public:
    string engine_name;
    Engine(string name)
    {
        engine_name = name;
    }
    ~Engine() {}
    string get_name()
    {
        return engine_name;
    }
    void set_name(string name)
    {
        engine_name = name;
    }
};

class Car
{
public:
    string carname;
    int passenger_capacity;
    int passenger_count;
    Person *passenger[4];
    Engine engine_obj;
    Car(string name, Engine e) : engine_obj(e)
    {
        carname = name;
        passenger_capacity = 4;
        passenger_count = 0;
    }
    ~Car() {}
    string get_name()
    {
        return carname;
    }
    void set_name(string name)
    {
        carname = name;
    }
    void add_passenger(Person *);
    void display();
};

void Car ::add_passenger(Person * p)
{
    
    passenger[passenger_count]=p;
    passenger_count++;

}
void Car::display(){
    cout<<"\nName of car :\t"<<get_name();
    cout<<"\nName of Engine : \t"<<engine_obj.engine_name;
    cout<<"\nNames of passengers : \n";
    for(int i=0;i<passenger_count;i++){
        cout<<i+1<<"\t"<<passenger[i]->person_name<<endl;
    }
}
int main(int argc, char const *argv[])
{
    Engine e1("carEngine");
    Person p1("Shreyash"),p2("Yash"),p3("Raju"),p4("Ram");
    Car c1("Avinya", e1);
    c1.add_passenger(&p1);
    c1.add_passenger(&p2);
    c1.add_passenger(&p3);
    c1.add_passenger(&p4);
    e1.~Engine();
    p1.~Person();
    p2.~Person();
    p3.~Person();
    p4.~Person();

    c1.display();
    c1.~Car();
    return 0;
}
