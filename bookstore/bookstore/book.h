#pragma once
#using <system.dll>
using namespace System;
using namespace System::IO;

ref class book
{
public:
	String^ book_name;
	Int32^ id;
	Int32^ qty;
	Int32^ price;

	void createBook(String^ id, String^ qty, String^ price, String^ book_name, String^ auth, String^ isbn, String^ lang, String^ pub)
	{
		// String^ fname = id + ".txt";
		String^ towrite = id + "," + book_name + "," + price + "," + qty + "," + auth + "," + isbn + "," + lang + "," + pub;
		StreamWriter^ wr = File::AppendText("books.csv");
		wr->WriteLine(towrite);
		wr->Close();

	}



};