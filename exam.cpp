// question 1
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
        cout << "name: " << name << endl;
        cout << "rollNumber: " << rollNumber << endl;
    }
};

int main()
{
    Student s[3] = {
        Student("Renish", 101),
        Student("Aryan", 102),
        Student("Meet", 103)};

    for (int i = 0; i < 3; i++)
    {
        cout << "student" << i + 1 << endl;
        s[i].display();
    }
}

//question 2
#include<iostream>
 using namespace std;
 
 class Car{
     private:
      string model;
      int year;
      int speed;
      
      public:
       
       void setModel(string m){
           model = m;
       }
       
       void setYear(int y){
           year = y;
       }
       
       void setspeed(int s){
           speed = s;
       }
       
       string getModel(){
           return model;
       }
       
       int getYear(){
           return year;
       }
       
       int getSpeed(){
           return speed;
       }
 };
 
 int main(){
     
     Car c1;
    string model;
    int year, speed;
    
 cout << "Enter Car Model: ";
    cin >> model;

    cout << "Enter Car Year: ";
    cin >> year;

    cout << "Enter Car Speed: ";
    cin >> speed;

    c1.setModel(model);
    c1.setYear(year);
    c1.setspeed(speed);

    cout << "\nCar Details:" << endl;
    cout << "Model: " << c1.getModel() << endl;
    cout << "Year: " << c1.getYear() << endl;
    cout << "Speed: " << c1.getSpeed() << " km/h" << endl;

    return 0;
}

// question 3,question 4
#include<iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }

    virtual void calculateDiscount() = 0;
};

class Laptop : public Device
{
public:
    void displayLaptop()
    {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " W" << endl;
    }

    void calculateDiscount()
    {
        int discount = getPowerConsumption() * 10 / 100;
        cout << "Laptop Discount: " << discount << endl;
    }
};

class Smartphone : public Device
{
public:
    void displaySmartphone()
    {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " W" << endl;
    }

    void calculateDiscount()
    {
        int discount = getPowerConsumption() * 15 / 100;
        cout << "Smartphone Discount: " << discount << endl;
    }
};

int main()
{
    Laptop l1;
    Smartphone s1;

    l1.setBrand("Dell");
    l1.setPowerConsumption(50000);

    s1.setBrand("Samsung");
    s1.setPowerConsumption(30000);

    cout << "Laptop Details:" << endl;
    l1.displayLaptop();
    l1.calculateDiscount();

    cout << endl;

    cout << "Smartphone Details:" << endl;
    s1.displaySmartphone();
    s1.calculateDiscount();

    cout << endl;

    Device* d[2];

    d[0] = &l1;
    d[1] = &s1;

    return 0;
}

//question 5

#include<iostream>
 using namespace std;
 
   class Animal{
       public:
        virtual void makeSound() = 0;
        virtual void move() = 0;
   };
   
   class Lion : public Animal{
       public:
         void makeSound(){
             cout<<"lion sound"<<endl;
         }
         
         void move(){
             cout<<"lion run"<<endl;
         }
   };
   
   class Fish : public Animal{
       void makeSound(){
           cout<<"fish sound"<<endl;
       }
       
       void move(){
           cout<<"fish swimming"<<endl;
       }
   };
   
   int main(){
       Animal* a[2];
       
       Lion l1;
       Fish f1;
       
       a[0] = &l1;
       a[1] = &f1;
       
       for(int i = 0; i < 2; i++){
           a[i]->makeSound();
           a[i]->move();
       }
   }
