#ifndef PRODUCT_H
#define PRODUCT_H

class product
{
private:
	string pname;
	string pnumber;
public:
	string getname()
	{
		return pname;
	}
	string getnumber()
	{
		return pnumber;
	}
	product(string name, string number)
	{
		pname = name;
		pnumber = number;
	}
};

#endif
