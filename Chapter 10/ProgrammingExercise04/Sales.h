#pragma once
namespace SALES
{
	class Sales
	{
	public:
		Sales(const double ar[], int n);
		Sales();

		void showSales() const;
	private:

		static const int QUARTERS = 4;
		double sales[QUARTERS]{ 0, 0, 0, 0, };
		double average = 0;
		double max = 0;
		double min = 0;
	};
}