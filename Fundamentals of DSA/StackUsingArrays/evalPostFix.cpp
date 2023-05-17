#include "stackUsingCAC.cpp"
char calc(char c, STACK &st)
{
    int B = st.peek() - '0';
    st.pop();
    int A = st.peek() - '0';
    st.pop();
    if (c == '+')
    {
        return A + B + '0';
    }
    else if (c == '-')
    {
        return A - B + '0';
    }
    else if (c == '*')
    {
        return A * B + '0';
    }
    else if (c == '/')
    {
        return A / B + '0';
    }
}
int evalPostfixExp(string s)
{
    STACK st(s.length());
    int value;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            st.push(c);
        }
        else
        {
            st.push(calc(c, st));
        }
    }
    while (!st.isEmpty())
    {
        value = st.peek() - '0';
        st.pop();
    }
    return value;
}
int main()
{
    string postfixExp = "23*45+*";
    cout << evalPostfixExp(postfixExp);
    return 0;
}