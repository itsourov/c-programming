#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int a)
{
    printf("%d\n", a);
}

void print(int a, int b)
{
    printf("%d %d\n", a, b);
}

void print(int a, int b, int c)
{
    printf("%d %d %d\n", a, b, c);
}

void print(int a, int b, int c, int d)
{
    printf("%d %d %d %d\n", a, b, c, d);
}

void print(int a, int b, int c, int d, int e)
{
    printf("%d %d %d %d %d\n", a, b, c, d, e);
}

void print(int a, int b, int c, int d, int e, int f)
{
    printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
}

void print(int a, int b, int c, int d, int e, int f, int g)
{
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
}

void sort(int a)
{
    print(a);
}

void sort(int a, int b)
{
    if (b < a)
        print(b, a);
    else
        print(a, b);
}

void sort(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            if (b < c)
                print(a, b, c);
            else
                print(a, c, b);
        }
        else
            print(c, a, b);
    }
    else
    {
        if (b < c)
        {
            if (a < c)
                print(b, a, c);
            else
                print(b, c, a);
        }
        else
            print(c, b, a);
    }
}

void sort(int a, int b, int c, int d)
{
    vector<int> nums = {a, b, c, d};
    sort(nums.begin(), nums.end());
    print(nums[0], nums[1], nums[2], nums[3]);
}

void sort(int a, int b, int c, int d, int e)
{
    vector<int> nums = {a, b, c, d, e};
    sort(nums.begin(), nums.end());
    print(nums[0], nums[1], nums[2], nums[3], nums[4]);
}

void sort(int a, int b, int c, int d, int e, int f)
{
    vector<int> nums = {a, b, c, d, e, f};
    sort(nums.begin(), nums.end());
    print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]);
}

void sort(int a, int b, int c, int d, int e, int f, int g)
{
    vector<int> nums = {a, b, c, d, e, f, g};
    sort(nums.begin(), nums.end());
    print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6]);
}

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int n;
        cin >> n;

        printf("Case %d:\n", t);

        if (n == 1)
        {
            printf("void print( int a ) {\n printf( \"%%d\\n\", a );\n}\nvoid sort( int a ) {\n print( a );\n}\n");
        }
        else if (n == 2)
        {
            printf("void print(int a,int b){\nprintf( \"%%d %%d\\n\",a,b);\n}\nvoid sort( int a, int b){\nif( b < a )\nprint( b, a );\nelse\nprint( a, b );\n}\n");
        }
        else if (n == 3)
        {
            printf("void print(int a, int b, int c) {\n  printf(\"%%d %%d %%d\\n\", a, b, c);\n}\nvoid sort( int a, int b, int c ) {\n if (a < b)\n  if (a < c)\n   if (b < c)\n    print(a,b,c);\n   else\n    print(a,c,b);\n  else\n   print(c, a, b);\n else\n  if (b < c)\n   if (a < c)\n    print(b, a, c);\n   else\n    print(b, c, a);\n  else\n   print(c, b, a);\n}\n");
        }
        else if (n == 4)
        {
            printf("void print(int a, int b, int c, int d) {\n  printf(\"%%d %%d %%d %%d\\n\", a, b, c, d);\n}\nvoid sort( int a, int b, int c, int d ) {\n vector<int> nums = {a, b, c, d};\n sort(nums.begin(), nums.end());\n print(nums[0], nums[1], nums[2], nums[3]);\n}\n");
        }
        else if (n == 5)
        {
            printf("void print(int a, int b, int c, int d, int e) {\n  printf(\"%%d %%d %%d %%d %%d\\n\", a, b, c, d, e);\n}\nvoid sort( int a, int b, int c, int d, int e ) {\n vector<int> nums = {a, b, c, d, e};\n sort(nums.begin(), nums.end());\n print(nums[0], nums[1], nums[2], nums[3], nums[4]);\n}\n");
        }
        else if (n == 6)
        {
            printf("void print(int a, int b, int c, int d, int e, int f) {\n  printf(\"%%d %%d %%d %%d %%d %%d\\n\", a, b, c, d, e, f);\n}\nvoid sort( int a, int b, int c, int d, int e, int f ) {\n vector<int> nums = {a, b, c, d, e, f};\n sort(nums.begin(), nums.end());\n print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]);\n}\n");
        }
        else if (n == 7)
        {
            printf("void print(int a, int b, int c, int d, int e, int f, int g) {\n  printf(\"%%d %%d %%d %%d %%d %%d %%d\\n\", a, b, c, d, e, f, g);\n}\nvoid sort( int a, int b, int c, int d, int e, int f, int g ) {\n vector<int> nums = {a, b, c, d, e, f, g};\n sort(nums.begin(), nums.end());\n print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6]);\n}\n");
        }
    }

    return 0;
}
