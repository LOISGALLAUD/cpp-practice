#include <iostream>
#include <map>
#include <vector>

using namespace std;

/*
  logs = [
    "88 99 200",
    "88 99 300",
    "99 32 100",
    "12 12 15"
  ]
  threshold = 2
*/

vector<string> split(string s, char c);

vector<string> processLogs(vector<string> logs, int threshold)
{
    vector<string> res;
    map<string, int> m;
    for (auto log : logs)
    {
        vector<string> v = split(log, ' ');
        string id1 = v[0];
        string id2 = v[1];

        if (id1 == id2)
        {
            m[id1]++;
        }
        else
        {
            m[id1]++;
            m[id2]++;
        }
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second >= threshold)
        {
            res.push_back(it->first);
        }
    }
    return res;
}

vector<string> split(string s, char c)
{
    vector<string> res;
    int start = 0;
    int end = s.find(c);
    while (end != string::npos)
    {
        res.push_back(s.substr(start, end - start));
        start = end + 1;
        end = s.find(c, start);
    }
    res.push_back(s.substr(start, end - start));
    return res;
}

void show(vector<string> v)
{
    for (auto s : v)
    {
        cout << s << endl;
    }
}

int main(void)
{
    vector<string> logs = {"88 99 200", "88 99 300", "99 32 100", "12 12 15"};
    int threshold = 2;
    vector<string> res = processLogs(logs, threshold);
    show(res);
    return 0;
}
