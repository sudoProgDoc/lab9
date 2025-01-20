#include <iostream>
using namespace std;

void task1(void)
{
    char s1[14] = "Hello ";
    char s2[] = "world!";
    strcat(s1, s2);
    cout << s1 << endl;
    cout << "Длина строки " << strlen(s1) << endl;
    cout << strset(s1, '=') << endl;
}

void task4(void)
{
    int n;
    cout << "Введите количество слов: ";
    cin >> n;
    if (n < 0 || n > 20) cout << "Количество строк должно быть больше 1 и не более 20" << endl;
    char s[20][10];
    cout << "Введите слова:\n";
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) if (i & 1) cout << s[i] << endl;
}
int main()
{
    task1();
    task4();
}