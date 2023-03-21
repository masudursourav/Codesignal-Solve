bool solution(string s1, string s2) {
vector<string>v1, v2;
	auto prs = [](string str)
	{
		string temp;
		vector<string>res;
		for (size_t i = 0, start = 0; i < str.size(); i++)
		{
			if (isdigit(str[i]))
			{
				temp.push_back(str[i]);
				if (i != str.size() - 1)
					continue;
			}
			if (temp.size() != 0)
			{
				res.push_back(temp);
				temp = "";

			}
			res.push_back(string(1, str[i]));
		}
		return res;
	};
	v1 = prs(s1);
	v2 = prs(s2);
	int size = v1.size() < v2.size() ? v1.size() : v2.size();
	for (size_t i = 0; i < size; i++)
	{
		if (isdigit(v1[i][0]) && isdigit(v2[i][0]))
		{
			if (atof(v1[i].c_str()) != atof(v2[i].c_str()))
			{
				return atof(v1[i].c_str()) < atof(v2[i].c_str());
			}
		}
		else if (!isdigit(v1[i][0]) && !isdigit(v2[i][0]))
		{
			if (v1[i] != v2[i])
				return v1[i] < v2[i];
		}
		else
		{
			if (isdigit(v1[i][0]))
				return true;
			else if (isdigit(v2[i][0]))
				return false;
		}
	}

	if (v1.size() != v2.size())
		return v1.size() < v2.size();

	for (size_t i = 0; i < v1.size(); i++)
	{
		if (v1[i].size() > v2[i].size())
			return true;
		else if (v1[i].size() < v2[i].size())
			return false;
	}
	return false;
}
