#include "Lib.h"

vector<string> find(const string& str, char ch)
{
    /*поиск слов разреденными символом ch*/
    vector<string> words;
    string word;
    int len = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            len++;
            if (i == str.length()-1)
            {
                for (int j = i-len+1; j < i+1; j++)
                    word.push_back(str[j]);
                words.push_back(word);
            } 
        }
        else if (len > 0)
        {
            for (int j = i-len; j < i; j++)
                word.push_back(str[j]);
            
            words.push_back(word);
            word = "";
            len = 0;
        }
    }

    return words;
}

void String42(const vector<string>& words)
{
    int count = 1;
    int words_size = words.size();
    int i;

    for (i = 0; i < words_size-1; i++)
    {
        for (int j = i+1; j < words_size; j++)
        {
            if (words[i][0] == words[j][0] && words[i][words[i].size()-1] == words[j][words[j].size()-1])
            {
                count++;
            }
        }
        cout << i+1 << ")" << "\""  << words[i] << "\": " << count << endl;
        
        if (count > 1)
            count = 1;     
    }

    cout << i+1 << ")" << "\"" << words[words_size-1] << "\": " << 1 << endl;
}

void String43(const vector<string>& words)
{
    /*функция считает сколько слов есть, в которых присутствует символ 'A' */
    int count = 0;
    int words_size = words.size();

    for (int i = 0; i < words_size; i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == 'A')
            {
                count++;
                break;
            }
        }
    }

    cout << "Count = " << count << endl;
}

void String44(const vector<string>& words)
{
    /*функция считает сколько слов есть, в которых присутствует символ 'A' 3 раза */
    int count = 0;
    int words_size = words.size();
    int count_A = 0;

    for (int i = 0; i < words_size; i++)
    {
        count_A = 0;

        for (int j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == 'A')
                count_A++;
        }

        if (count_A == 3)
            count++;
    }

    cout << "Count = " << count << endl;
}

void String45(const vector<string>& words)
{
    int min_len_word = words[0].size();

    for (int i = 1; i < words.size(); i++)
    {
        if (min_len_word > words[i].size())
            min_len_word = words[i].size();
    }

    cout << "min_len_word = " << min_len_word << endl;
}

void String46(const vector<string>& words)
{
    int max_len_word = words[0].size();

    for (int i = 1; i < words.size(); i++)
    {
        if (max_len_word < words[i].size())
            max_len_word = words[i].size();
    }

    cout << "max_len_word = " << max_len_word << endl;
}

void String47(const vector<string>& words)
{
    for (int i = 0; i < words.size()-1; i++)
    {
        cout << words[i] << '.';
    }
    cout << words[words.size()-1] << endl;
}

void String48(const vector<string>& words)
{
    char first_chr;

    for (int i = 0; i < words.size(); i++)
    {
        first_chr = words[i][0];
        cout << first_chr;

        for (int j = 1; j < words[i].size(); j++)
        {
            if (words[i][j] == first_chr)
                cout << '.';
            else
                cout << words[i][j];
        }

        cout << ' ';
    }
}


void String49(const vector<string>& words)
{
    char last_chr;

    for (int i = 0; i < words.size(); i++)
    {
        last_chr = words[i][words[i].size()-1];

        for (int j = 0; j < words[i].size()-1; j++)
        {
            if (words[i][j] == last_chr)
                cout << '.';
            else
                cout << words[i][j];
        }
        cout << last_chr << ' ';
    }
}

void String50(const vector<string>& words)
{
    for (int i = words.size()-1; i > 0; i--)
    {
        cout << words[i] << ' ';
    }
    cout << words[0];
}

void insert_sort_word(vector<string>& words)
{
    /*сортирует строки по возрастанию*/

    for (int i = 1; i < words.size(); i++)
    {
        int k = i;
        while (k > 0 && words[k-1] > words[k])
        {
            string tmp = words[k-1];
            words[k-1] = words[k];
            words[k] = tmp;
            
            k--;
        }
    }
}

void String51(vector<string>& words)
{
    insert_sort_word(words);

    for (int i = 0; i < words.size()-1; i++)
        cout << words[i] << ' ';

    cout << words[words.size()-1];
}

void String52(vector<string>& words)
{
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i][0] >= 'a' && words[i][0] <= 'z')
            cout << (char)(words[i][0] - 32);
        else
            cout << words[i][0];

        for (int j = 1; j < words[i].size(); j++)
        {
            cout << words[i][j];
        }
        cout << ' ';
    }
}

void String54(const string& str)
{
    int count = 0;//количество знаков препинания
    const int n_vowel = 12;
    char vowel[n_vowel] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < n_vowel; j++)
        {
            if (str[i] == vowel[j])
            {
                count++;
                break;
            }
        }
    }    
    cout << "Количество гласных букв: " << count << endl;
}

void String55(const vector<string>& words)
{
    int max_len_words = words[0].size();
    int index_max_len_words = 0;

    for (int i = 1; i < words.size(); i++)
    {
        if (max_len_words < words[i].size())
        {    
            index_max_len_words = i;
            break;
        }        
    }

    cout << "Самое первое длинное слово: "  << words[index_max_len_words] << endl;
}

void String56(const vector<string>& words)
{
    int min_len_words = words[0].size();
    int index_min_len_words = 0;

    for (int i = 1; i < words.size(); i++)
    {
        if (min_len_words > words[i].size())
        {    
            index_min_len_words = i;
            min_len_words = words[i].size();
        }        
    }

    cout << "Самое последнее короткое слово: "  << words[index_min_len_words] << endl;
}

void String57(const vector<string>& words)
{
    for (int i = 0; i < words.size()-1; i++)
    {
        cout << words[i] << ' ';
    }
    cout << words[words.size()-1];
}