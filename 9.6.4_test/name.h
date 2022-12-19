#pragma once
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void Setsales(Sales &s, const double ar[], int n);
	void Setsales(Sales &s);
	void Showsales(const Sales &s);
}
