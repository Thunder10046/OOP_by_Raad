#include <bits/stdc++.h>
using namespace std;

class Department
{
protected:
    string name_of_dept42;
    static int totalstudents;
    int total_teachers;
    int totalStudents = 0;

public:

    virtual double equipment_index42() = 0;
    void Display()
    {
        cout << "Name: " << name_of_dept42 << endl;
        cout << "Total Teachers= " << total_teachers << endl;
        cout << "Total Students = " << totalstudents << endl;
    }
    int total_students()
    {
        return totalstudents;
    }
};
int Department::totalstudents = 0;

class EEE : public Department
{
    int no_of_computers;

public:
    EEE(string name, int teachers, int students, int computers)
    {
        name_of_dept42 = name;
        total_teachers = teachers;
        totalstudents += students;
        no_of_computers = computers;
        
    }
    
    double equipment_index42()
    {
        if (totalstudents == 0)
            throw runtime_error("Math Error : Can't divided by zero\n");
        try
        {
            double equipmentIndex = ((double)no_of_computers / (double)totalstudents);

            return equipmentIndex;
        }
        catch (runtime_error &e)
        {
            cout << "Math Error\n";
            // return;
        }
    }
    void Display()
    {
        Department::Display();
        cout << "Total Machines : " << no_of_computers << endl;
        cout << "Computer Index : " << equipment_index42() << endl;
        cout << "\n";
    }
    int Total()
    {
        return no_of_computers;
    }
};

class CSE : public Department
{
    int no_of_machines;

public:
    CSE(string name, int teachers, int students, int machines)
    {
        name_of_dept42 = name;
        total_teachers = teachers;
        totalstudents += students;
        no_of_machines = machines;
        
    }
    // int total_students()
    // {
    //     return totalstudents;
    // }
    int Total()
    {
        return no_of_machines;
    }
    double equipment_index42()
    {
        if (totalstudents == 0)
            throw runtime_error("Math Error : Can't divided by zero\n");
        try
        {
            // else
            // {
            double equipmentIndex = ((double)no_of_machines / (double)totalstudents);
            //  cout << equipmentIndex << endl;
            return equipmentIndex;
            //}
        }
        catch (runtime_error &e)
        {
            cout << "Math Error\n";
            // return;
        }
    }
    void Display()
    {
        Department::Display();
        cout << "Total Computers : " << no_of_machines << endl;
        cout << "Machine Index :  " << equipment_index42() << endl;
        cout << "\n";
    }
};

class ECE : public Department
{
    int no_of_computers;
    int no_of_machines;
    int total_equipment;

public:
    ECE(string name, int teachers, int students, int machines, int computers)
    {
        name_of_dept42 = name;
        total_teachers = teachers;
        totalstudents += students;
        no_of_machines = machines;
        no_of_computers = computers;
        total_equipment = machines + computers;
    }

public:
    double equipment_index42()
    {
        if (totalstudents == 0)
            throw runtime_error("Math Error : Can't divided by zero\n");
        try
        {
            // else
            // {
            double equipmentIndex = ((double)total_equipment / (double)totalstudents);
            return equipmentIndex;
            //}
        }
        catch (runtime_error &e)
        {
            cout << "Math Error\n";
            // return;
        }
    }
    void Display()
    {
        Department::Display();
        cout << "Total Machines = " << no_of_machines << endl;
        cout << "Total Computers = " << no_of_computers << endl;
        cout << "Computer + Machine index = " << equipment_index42() << endl;
        cout << "\n";
    }
    int Total()
    {
        return total_equipment;
    }
};
int main()
{
    EEE eee("EEE", 50, 1000, 50);
    CSE cse("CSE", 30, 1200, 200);
    ECE ece("ECE", 30, 400, 25, 100);
    eee.Display();
    cse.Display();
    ece.Display();
    cout << "Total Equipments = " << eee.Total() + cse.Total() + ece.Total() << endl;
    cout << "Total Students = " << eee.total_students()<<endl;
    cout << "End of Program" << endl;
    return 0;
}