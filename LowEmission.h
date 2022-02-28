#ifndef LOWEMISSION_H
#define LOWEMISSION_H

#include <string>
using namespace std;

class LowEmission
{
    public:
        LowEmission() = default;
        LowEmission(char e)
            { setElectric(e); }
        void setMake(string m)
            { make = m; }
        void setModel(string m)
            { model = m; }
        void setYear(int y)
            { year = y; }
        void setElectric(char);
        void setMiles(double m)
            { miles = m; }
        string getMake()
            { return make; }
        string getModel()
            { return model; }
        int getYear()
            { return year; }
        bool getElectric()
            { return electric; }
        double getMiles()
            { return miles; }

    private:
        string make,
            model;
        int year;
        bool electric {false};
        double miles;
};

#endif
