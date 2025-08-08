#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;

    Student() {}

    Student(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, const Student r)
    {
        if (l.marks == r.marks)
            return l.age > r.age;
        return l.marks < r.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        pq.push(Student(name, age, marks));
    }

    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            int age, marks;
            cin >> name >> age >> marks;
            pq.push(Student(name, age, marks));

            if (!pq.empty())
            {
                Student s = pq.top();
                cout << s.name << " " << s.age << " " << s.marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
            {
                Student s = pq.top();
                cout << s.name << " " << s.age << " " << s.marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    Student s = pq.top();
                    cout << s.name << " " << s.age << " " << s.marks << endl;
                }
                else
                    cout << "Empty" << endl;
            }
        }
    }

    return 0;
}