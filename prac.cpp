#include <bits/stdc++.h>
using namespace std;

class Department
{
protected:
    string name;
    int students;
    int teachers;
    int count = 0;
    
    virtual double equipment_index() = 0;
};


class EEE : public Department
{
private:
    int ComputerNo;
    int Machines;
    public:
    EEE(string name, int teachers, int students, int Machines)
    {
        this->name = name;
        this->teachers = teachers;
        this->students = students;
        this->Machines = Machines;
    }
    

    double equipment_index()
    {
        double eqp = (double)Machines / (double)students;
        return eqp;
    }
    

    void Display()
    {
        cout << "Dept Name: " << name << endl;
        cout << "Total Teachers : " << teachers << endl;
        cout << "Total Students : " << students << endl;
        cout << "Total Machines : " << Machines << endl;
        cout << "Machine Index  : " << equipment_index() << endl;
    }
};

class CSE : public Department
{
private:
    int Machineno;
    public:
    CSE(string name, int teachers, int students, int Machineno)
    {
        this->name = name;
        this->teachers = teachers;
        this->students = students;
        this->Machineno = Machineno;
    }
    double equipment_index()
    {
        double eqp = (double)Machineno / (double)students;
        return eqp;
    }
    
    void Display()
    {
        cout << "Dept Name: " << name << endl;
        cout << "Total Teachers : " << teachers << endl;
        cout << "Total Students : " << students << endl;
        cout << "Total Machines : " << Machineno << endl;
        cout << "Machine Index  : " << equipment_index() << endl;
    }
};
class ECE : public Department
{
private:
    int computers;
    int Machines;
public:
    ECE(string name, int teachers, int students, int Machines, int computers)
    {
        this->name = name;
        this->teachers = teachers;
        this->students = students;
        this->Machines = Machines;
        this->computers = computers;
    }
    double equipment_index()
    {
        double eqp = ((double)Machines + (double)computers) / (double)students;
        try
        {
            if(eqp>0)
            return eqp;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    void Display()
    {
        cout << "Dept Name: " << name << endl;
        cout << "Total Teachers : " << teachers << endl;
        cout << "Total Students : " << students << endl;
        cout << "Total Machines : " << Machines << endl;
        cout << "Total Computers : " << computers << endl;
        cout << "Computer + Machine Index  : " << equipment_index() << endl;
    }
};
int main()
{
    EEE eee("EEE", 50, 1000, 50);
    eee.Display();

    
    CSE cse("CSE", 30, 1200, 200);
    cse.Display();
    
    ECE ece("ECE", 30, 400, 25, 100);
    ece.Display();
    
}