class Solution {
public:

    string encode(vector<string> strs) {
        string 	encoded_string;
        string	string_length;
        for (string s: strs){
            string_length = to_string(s.size());
            encoded_string.append(string_length + "#" + s);
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        string word;
        vector<string> strings;
        int size = s.size();
        int string_length = 0;
        int i = 0;
        int j = 0;

        while (i < size){
            while (s[i] != '#'){
                string_length *= 10;
                string_length += s[i++] - '0';
            }
            i++;
            j = i;
            while (i < j + string_length)
                word.push_back(s[i++]);
            strings.push_back(word);
            string_length = 0;
            word = "";
        }
        return strings;
    }
};
