#include "stackUsingCAC.cpp"
/**
 * The function returns the precedence value of a given operator character.
 *
 * @param c a character representing an operator in an arithmetic expression.
 *
 * @return The function `precedence` takes a character as input and returns an integer value that
 * represents the precedence of the operator represented by that character.
 */
int precedence(char c)
{
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void infixToPostfix(string s)
{
    STACK st(s.length());
    string result;
    /* The `for` loop is iterating through each character in the input string `s`. For each character, it
    checks if it is an operand (a letter or a digit), an opening parenthesis, a closing parenthesis, or
    an operator. */
    for (int i = 0; i < s.length(); i++)
    {
        /* This code block is responsible for converting an infix expression to a postfix expression
        using the stack data structure. */
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')')
        {
            while (st.peek() != '(')
            {
                result += st.peek();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.isEmpty() && precedence(c) <= precedence(st.peek()))
            {
                result += st.peek();
                st.pop();
            }
            st.push(c);
        }
    }
    /* This code block is responsible for emptying the stack and appending the remaining operators to the
    postfix expression. It continues to pop elements from the stack until it is empty, and for each
    element, it appends the element to the `result` string and removes it from the stack using the
    `pop()` method. */
    while (!st.isEmpty())
    {
        result += st.peek();
        st.pop();
    }
    cout << result << endl;
}
int main()
{
    string infixExpression = "a+((b+c)+(d+e)*f)/g";
    infixToPostfix(infixExpression);
}