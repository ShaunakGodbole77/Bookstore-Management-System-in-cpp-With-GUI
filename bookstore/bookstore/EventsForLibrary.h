#pragma once
#using <system.dll>
using namespace System;
using namespace System::IO;

ref class EventsForLibrary
{
public:
	String^ name;
	String^ impPersona;
	String^ time;
	String^ venue;
	String^ date;

	void CreateEventForLibrary(String^ impPersona, String^ name, String^ time, String^ venue, String^ date)
	{
		// String^ fname = id + ".txt";
		String^ towrite = name + "," + impPersona + "," + time + "," + venue + "," + date;
		StreamWriter^ wr = File::AppendText("EventsForLibrary.csv");
		wr->WriteLine(towrite);
		wr->Close();

	}



};
