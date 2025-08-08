#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student() {}
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(const Student &l, const Student &r) const
    {
        if (l.marks != r.marks)
            return l.marks < r.marks;
        return l.roll > r.roll;
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
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
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
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (!pq.empty())
            {
                Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
            {
                Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if (cmd == 2)
        {
            // After 3 hours of debugging, i finally found the issue here
            if (!pq.empty())
                pq.pop();
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}