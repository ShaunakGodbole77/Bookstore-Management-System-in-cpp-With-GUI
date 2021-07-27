#pragma once
#using <system.dll>
using namespace System;
using namespace System::IO;

ref class Tracker
{
public:
	String^ name;
	String^ DueOn;
	String^ ID;

	void createBook(String^ name, String^ DueOn, String^ ID)
	{
		// String^ fname = id + ".txt";
		String^ towrite = name + "," + DueOn + "," + ID;
		StreamWriter^ wr = File::AppendText("Tracker.csv");
		wr->WriteLine(towrite);
		wr->Close();
	}
};