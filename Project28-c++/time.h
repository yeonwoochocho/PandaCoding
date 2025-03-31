#include <iostream>
#ifndef TIMEH

#

using namespace std;
/*
class Stock
{
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; };
public:
	//void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock& topval(Stock&);
	Stock(string, int, float);
	Stock();
	~Stock();
}; */

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time sum(Time&);
	Time operator*(int);
	virtual void show();
	//~Time();
	int getHour() {
		return hours;
	}
	int getMins() { return mins; }
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {
private :
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void show();
};
#endif
