// source file for Student_info-related functions
#include "Student_info.h"


using std::istream;             using std::vector;
using std::cout;                using std::endl;

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name() < y.name(); // Modified for class Student_info Ch. 9
}

bool compare(const Student_info_PF& x, const Student_info_PF& y)
{
    return x.name() < y.name(); // Modified for class Student_info Ch. 9
}


istream& Student_info_PF::read(istream& is)
{
    cout << "step0" << endl;
    is >> n >> midterm >> final;
    cout << "step1" << endl;
    read_hw(is, homework);
    cout << "step2" << endl;
    return is;
}

// Modified for class Student_info Ch. 9
istream& Student_info::read(istream& is)
{
    cout << "step0" << endl;
    is >> n >> midterm >> final;
    cout << "step1" << endl;
    read_hw(is, homework);
    cout << "step2" << endl;
    return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if (in) {
        // get rid of previous contents
        hw.clear();

        // read homework grades
        double x;
        while (in >> x)
            hw.push_back(x);

        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}
