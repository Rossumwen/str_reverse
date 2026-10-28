#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cout << "请输入句子：" ;
    getline(cin, s);
    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    cout << "单词个数: " << words.size() << endl;
    cout << "逆序输出: ";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}