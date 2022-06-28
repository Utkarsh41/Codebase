class Solution {
public:
    bool isMatching(char a, char b)
{
    return (
        (a == '(' && b == ')') ||
        (a == '{' && b == '}') ||
        (a == '[' && b == ']'));
}
    bool isValid(string st) {
        
         stack<int> s;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '(' || st[i] == '{' || st[i] == '[')
        {
            s.push(st[i]);
        }
        else
        {
            if (s.empty() == true)
                return false;

            else if (isMatching(s.top(), st[i]) == false)
            {
                return false;
            }
            else
                s.pop();
        }
    }
    return (s.empty() == true);
        
    }
};




