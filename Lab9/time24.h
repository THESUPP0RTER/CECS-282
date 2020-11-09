#include <iostream>
#include <string>
using namespace std;
class Time12
{
private:
    bool pm;                       //true = pm, false = am
    int hrs;                     
    int mins;                    
public:                           
    Time12() : pm(true), hrs(0), mins(0) 
    {  }
    Time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
    {  }
    void display() const           
    {
        cout << hrs << ':';
        if (mins < 10)
            cout << '0';         
        cout << mins << ' ';
        string am_pm = pm ? "p.m." : "a.m.";
        cout << am_pm;
    }
};
class Time24
{
private:
    int hours;             
    int minutes;            
    int seconds;                
public:                         
    Time24() : hours(0), minutes(0), seconds(0)
    {  }
    Time24(int h, int m, int s) :
        hours(h), minutes(m), seconds(s)
    {  }
    void display() const         
    {
        if (hours < 10)    cout << '0';
        cout << hours << ':';
        if (minutes < 10)  cout << '0';
        cout << minutes << ':';
        if (seconds < 10)  cout << '0';
        cout << seconds;
    }
    operator Time12();       
};
Time24::operator Time12()         
{
    int hrs24 = hours;
    bool pm = hours < 12 ? false : true;  
    int roundMins = seconds < 30 ? minutes : minutes + 1;
    if (roundMins == 60)                    
    {
        roundMins = 0;
        ++hrs24;
        if (hrs24 == 12 || hrs24 == 24)    
            pm = (pm == true) ? false : true; 
    }
    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
    if (hrs12 == 0)                        
    {
        hrs12 = 12; pm = false;
    }
    return Time12(pm, hrs12, roundMins);
}