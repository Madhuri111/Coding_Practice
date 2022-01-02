int main() 
{
    string szName = "TutorialCup";
    for (const char &ch : szName) // access by const reference
        cout << ch << ' ';
    cout << '\n';
    
    for (auto ch : szName) // access by value, the type of ch is ch
        cout << ch << ' ';
    cout << '\n';
 
    for (auto&& ch : szName) // access by reference, the type of ch is char&
        cout << ch << ' ';
    cout << '\n';
 
    for(char ch : {'T','u','t','o','r','i','a','l','C','u','p'}) // the initializer may be a braced-init-list
        cout << ch << ' ';
    cout << '\n';
}
