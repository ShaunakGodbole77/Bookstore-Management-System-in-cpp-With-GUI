#pragma once
#using <system.dll>
using namespace System;
using namespace System::IO;

ref class CusDet
{
public:
	String^ name;
	String^ contact;
	String^ email;
	String^ billnumber;

	void createBook(String^ name, String^ contact, String^ email, String^ billnumber)
	{
		// String^ fname = id + ".txt";
		String^ towrite = name + "," + contact + "," + email + "," + billnumber;
		StreamWriter^ wr = File::AppendText("CusDet.csv");
		wr->WriteLine(towrite);
		wr->Close();

	}



};
