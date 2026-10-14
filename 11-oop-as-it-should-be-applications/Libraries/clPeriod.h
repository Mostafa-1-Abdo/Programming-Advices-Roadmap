#pragma once
#include <iostream>
#include "clDate.h"

class clPeriod
{
public:
	clDate StartingDate;
	clDate EndingDate;

	clPeriod(const clDate &StartingDate,const clDate &EndingDate)
	{
		this->StartingDate = StartingDate;
		this->EndingDate = EndingDate;

		if (clDate::IsDate1AfterDate2(StartingDate,EndingDate))
			clDate::Swap(this->StartingDate, this->EndingDate);
	}
	clPeriod(const short StartingDay, const short StartingMonth, const int StartingYear, const short EndingDay, const short EndingMonth, const int EndingYear)
	{
		this->StartingDate = { StartingDay,StartingMonth,StartingYear };
		this->EndingDate = { EndingDay,EndingMonth,EndingYear };

		if (clDate::IsDate1AfterDate2(this->StartingDate, this->EndingDate))
			clDate::Swap(this->StartingDate, this->EndingDate);
	}
	clPeriod(const string& StartingDate, const string& EndingDate,const string &Delimiter = "/")
	{
		this->StartingDate = clDate::ConvertStringToDate(StartingDate, Delimiter);
		this->EndingDate = clDate::ConvertStringToDate(EndingDate, Delimiter);

		if (clDate::IsDate1AfterDate2(this->StartingDate, this->EndingDate))
			clDate::Swap(this->StartingDate, this->EndingDate);
	}
	clPeriod(const short DayOrderInStartingYear, const int StartingYear, const short DayOrderInEndingYear, const int EndingYear)
	{
		this->StartingDate = clDate::GetDateFromDayOrderInYear(DayOrderInStartingYear, StartingYear);
		this->EndingDate = clDate::GetDateFromDayOrderInYear(DayOrderInEndingYear, EndingYear);

		if (clDate::IsDate1AfterDate2(this->StartingDate, this->EndingDate))
			clDate::Swap(this->StartingDate, this->EndingDate);
	}

	void SetStartingDay(const short Day)
	{
		StartingDate.Day = Day;
	}
	short GetStartingDay()
	{
		return StartingDate.Day;
	}
	__declspec(property(put = SetStartingDay, get = GetStartingDay))short StartingDay;

	void SetStartingMonth(const short Month)
	{
		StartingDate.Month = Month;
	}
	short GetStartingMonth()
	{
		return StartingDate.Month;
	}
	__declspec(property(put = SetStartingMonth, get = GetStartingMonth))short StartingMonth;

	void SetStartingYear(const int Year)
	{
		StartingDate.Year = Year;
	}
	int GetStartingYear()
	{
		return StartingDate.Year;
	}
	__declspec(property(put = SetStartingYear, get = GetStartingYear))int StartingYear;

	void SetStartingDate(const clDate& Date)
	{
		StartingDate = Date;
	}

	void SetEndingDay(const short Day)
	{
		EndingDate.Day = Day;
	}
	short GetEndingDay()
	{
		return StartingDate.Day;
	}
	__declspec(property(put = SetEndingDay, get = GetEndingDay))short EndingDay;

	void SetEndingMonth(const short Month)
	{
		EndingDate.Month = Month;
	}
	short GetEndingMonth()
	{
		return EndingDate.Month;
	}
	__declspec(property(put = SetEndingMonth, get = GetEndingMonth))short EndingMonth;

	void SetEndingYear(const int Year)
	{
		EndingDate.Year = Year;
	}
	short GetEndingYear()
	{
		return EndingDate.Year;
	}
	__declspec(property(put = SetEndingYear, get = GetEndingYear))short EndingYear;

	void SetEndingDate(const clDate& Date)
	{
		EndingDate = Date;
	}


	static int GetLengthInDays(const clPeriod& Period, const bool IncludeEndDay = false)
	{
		return clDate::GetDifferenceInDays(Period.StartingDate, Period.EndingDate, IncludeEndDay);
	}
	int GetLengthInDays(const bool IncludeEndDay = false)
	{
		return GetLengthInDays(*this, IncludeEndDay);
	}

	static bool AreOverlap(const clPeriod& Period1, const clPeriod& Period2)
	{
		return !(clDate::IsDate1BeforeDate2(Period1.EndingDate, Period2.StartingDate) || clDate::IsDate1AfterDate2(Period1.StartingDate, Period2.EndingDate));
	}
	bool AreOverlap(const clPeriod& Period)
	{
		return AreOverlap(*this, Period);
	}

	static int GetPeriodsOverlapDays(const clPeriod& Period1, const clPeriod& Period2)
	{
		if (!AreOverlap(Period1, Period2))
			return 0;

		clDate StartingDate = clDate::IsDate1AfterDate2(Period1.StartingDate, Period2.StartingDate) ? Period1.StartingDate : Period2.StartingDate;
		clDate EndingDate = clDate::IsDate1BeforeDate2(Period1.EndingDate, Period2.EndingDate) ? Period1.EndingDate : Period2.EndingDate;
		clPeriod OverlapPeriod(StartingDate, EndingDate);

		return GetLengthInDays(OverlapPeriod, true);
	}
	int GetPeriodsOverlapDays(const clPeriod& Period)
	{
		return GetPeriodsOverlapDays(*this, Period);
	}

	static bool IsDateWithinPeriod(const clDate& Date, clPeriod Period) 
	{
		if (clDate::IsDate1AfterDate2(Period.StartingDate, Period.EndingDate))
			clDate::Swap(Period.StartingDate, Period.EndingDate);

		return !(clDate::IsDate1AfterDate2(Period.StartingDate, Date) || clDate::IsDate1BeforeDate2(Period.EndingDate, Date));
	}
	bool IsDateWithin(const clDate &Date)
	{
		return IsDateWithinPeriod(Date, *this);
	}
};