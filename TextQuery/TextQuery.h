#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cctype>
#include<fstream>
#include<cstring>

using namespace std;

class TextQuery{
public:
	typedef vector<string>::size_type line_no;

	typedef string::size_type str_size;

	void read_line(ifstream &is)
	{
		store_file(is);
		build_map();
	}

	vector<line_no> run_query(const string&) const;

	string text_line(line_no) const;




private:
	void store_file(ifstream&);

	void build_map();

	vector<string> lines_of_text;

	map<string, vector<line_no>> word_map;

	static std::string cleanup_str(const std::string&);
};

