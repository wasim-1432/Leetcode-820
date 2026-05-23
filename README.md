# 🚀 LeetCode 820 - Short Encoding of Words

## 📌 Problem
Given an array of words, return the length of the shortest reference string such that every word appears as a suffix ending with `'#'`.

---

## 💡 Approach
- Sort words in descending order of length.
- If a word already exists in the encoded string as a suffix, skip it.
- Otherwise, add the word followed by `'#'`.

---

## ✅ C++ Solution

```cpp
class Solution {
public:

    static bool cmp(string &a, string &b)
    {
        return a.size() > b.size();
    }

    int minimumLengthEncoding(vector<string>& words) {

        sort(words.begin(), words.end(), cmp);

        string ans = "";

        ans += words[0] + '#';

        for(int i = 1; i < words.size(); i++)
        {
            if(ans.find(words[i] + '#') != string::npos)
            {
                continue;
            }

            ans += words[i] + '#';
        }

        return ans.length();
    }
};
```

---

## ⏱️ Time Complexity
- Sorting: `O(n log n)`
- String Searching using `find()`

---

## 📚 Concepts Used
- Sorting
- Greedy Approach
- String Matching
- Suffix Optimization

---

## 🔥 Example

### Input
```txt
["time","me","bell"]
```

### Output
```txt
10
```

### Encoded String
```txt
"time#bell#"
```
