#include"TextQuery.h"
#include<cstdlib>

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr == 1) ? word : word + ending;
}

ifstream &