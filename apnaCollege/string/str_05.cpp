class Solution {
public:
    string removeOccurrences(string s, string part) {
        int length_of_part=part.size();


        for(char ch: s){
            if(s.find(part)<s.size()){
                s.erase(s.find(part),length_of_part);
            }
        }
        return s; 
    }
};

// Complexity of this version
// Time: O(n²) (worst case)
// Space: O(1)


https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

What is erase() in C++ string?

erase() is a function used to remove characters from a string.

Key points
It modifies the original string
by index + length
by iterator
by iterator range
1. Erase by index
s.erase(pos);
Removes all characters from pos to end
Example
string s = "computer";
s.erase(3);
cout << s;


Output

com

2. Erase by index and length
s.erase(pos, len);


Removes len characters starting from pos

Example

string s = "computer";
s.erase(2, 3);
cout << s;


Output

coter

3. Erase using iterator
s.erase(s.begin() + pos);


Removes one character

Example

string s = "computer";
s.erase(s.begin() + 1);
cout << s;


Output

cmputer

4. Erase using iterator range
s.erase(start_iterator, end_iterator);


Removes characters in range [start, end)

Example

string s = "computer";
s.erase(s.begin() + 1, s.begin() + 4);
cout << s;


Output

cputer

Common mistakes

Using invalid index

Forgetting that end iterator is not included

Using npos as a length directly

Very short summary

erase() removes characters from a string using index or iterators.q






1. Find a character
string s = "computer";

size_t pos = s.find('p');


Returns index of first 'p'

Result

2

2. Find a substring
string s = "computer science";

size_t pos = s.find("science");


Result

9

3. Find from a given position
string s = "banana";

size_t pos = s.find('a', 2);


Starts searching from index 2

Result

3

4. Check if found or not
if (s.find("java") == string::npos) {
    cout << "Not found";
}