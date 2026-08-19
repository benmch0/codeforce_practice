#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <char, int> dict{
        {'I',1}, {'V',5}, {'X',10},{'L',50},{'C',100},{'D',500}, {'M',1000}};

    string roman;
    int answer = 0;

    for(int i = 0; i < roman.length();i++)
    {
        if(dict[roman[i]] < dict[roman[i + 1]])
        {
            answer = answer - dict[roman[i]];
        }
        else
        {
            answer = answer + dict[roman[i]];
        }
    }
    return answer;
}