/* Учительница задала Пете домашнее задание — в заданном тексте расставить ударения в словах, после чего поручила Васе проверить это домашнее задание.
Вася очень плохо знаком с данной темой, поэтому он нашел словарь, в котором указано, как ставятся ударения в словах.
К сожалению, в этом словаре присутствуют не все слова. Вася решил, что в словах, которых нет в словаре, он будет считать,
что Петя поставил ударения правильно, если в этом слове Петей поставлено ровно одно ударение.

Оказалось, что в некоторых словах ударение может быть поставлено больше, чем одним способом. Вася решил, что в этом случае если то, как Петя поставил ударение,
соответствует одному из приведенных в словаре вариантов, он будет засчитывать это как правильную расстановку ударения, а если не соответствует, то как ошибку.

Вам дан словарь, которым пользовался Вася и домашнее задание, сданное Петей. Ваша задача — определить количество ошибок, которое в этом задании насчитает Вася.

Входные данные

Вводится сначала число N — количество слов в словаре (0 ≤ N ≤ 20000).

Далее идет N строк со словами из словаря. Каждое слово состоит не более чем из 30 символов. Все слова состоят из маленьких и заглавных латинских букв. 
В каждом слове заглавная ровно одна буква — та, на которую попадает ударение. Слова в словаре расположены в алфавитном порядке.
Если есть несколько возможностей расстановки ударения в одном и том же слове, то эти варианты в словаре идут в произвольном порядке.

Далее идет упражнение, выполненное Петей. Упражнение представляет собой строку текста, суммарным объемом не более 300000 символов. 
Строка состоит из слов, которые разделяются между собой ровно одним пробелом. Длина каждого слова не превышает 30 символов. 
Все слова состоят из маленьких и заглавных латинских букв (заглавными обозначены те буквы, над которыми Петя поставил ударение).
Петя мог по ошибке в каком-то слове поставить более одного ударения или не поставить ударения вовсе.

Выходные данные

Выведите количество ошибок в Петином тексте, которые найдет Вася.

Примечание к примеру


1. В слове cannot, согласно словарю возможно два варианта расстановки ударения.
Эти варианты в словаре могут быть перечислены в любом порядке (т.е. как сначала cAnnot, а потом cannOt, так и наоборот).
Две ошибки, совершенные Петей — это слова be (ударение вообще не поставлено) и fouNd (ударение поставлено неверно).
Слово thE отсутствует в словаре, но поскольку в нем Петя поставил ровно одно ударение, признается верным.

2. Неверно расставлены ударения во всех словах, кроме The (оно отсутствует в словаре, в нем поставлено ровно одно ударение).
В остальных словах либо ударные все буквы (в слове PAGE), либо не поставлено ни одного ударения. */

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// put a string to lower case for our dictionary
// we can use it as a tag
string to_lower_case(const string& s) {
    string tmp;

    for (int i = 0; i < s.size(); ++i) {
        char ch = s[i];
        if (isupper(ch)) {
            ch = tolower(ch);
        }

        tmp.push_back(ch);
    }

    return tmp;
}

// filling new dictionary
map<string, vector<string>>& fill_dict(map<string, vector<string>>& d, int n) {
    string word;
    string bookmark;

    for (int i = 0; i < n; ++i) {
        cin >> word;
        bookmark = to_lower_case(word);
        d[bookmark].push_back(word);
    }

    return d;
}

void print_dict(const map<string, vector<string>>& dict) {
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        cout << it->first << ": ";
        for (auto&i : it->second) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

// check if a word is in a dictionary
bool in_dict(const vector<string>& dict, const string &word) {
    for (int i = 0; i < dict.size(); ++i) {
        if (word == dict[i]) {
            return true;
        }
    }

    return false;
}

// count accents in a word which are dedicated by upper letters
int count_upper(const string &s) {
    int cnt = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            ++cnt;
        }
    }

    return cnt;
}

// check essay for right accents in words with using a dictionary
int check_work(const map<string, vector<string>>& dict) {
    int mistakes = 0;
    string word;

    while (cin >> word) {
        if (count_upper(word) != 1) {
            ++mistakes;
        }
        else {
            string low_case_word = to_lower_case(word);
            auto it = dict.find(low_case_word);

            if (it != dict.end() && !in_dict(it->second, word)) {
                ++mistakes;
            }
        }
    }

    return mistakes;
}

int main() {
    map<string, vector<string>> dict;
    int n;

    cin >> n;
    dict = fill_dict(dict, n);
    cout << check_work(dict);

    return 0;
}
