
    if (b % 2 == 0)
    {
        b /= 2;
        a *= 2;

        int c = max(a, b);
        int d = max(a, b);
        if (x != c || y != d)
        {
            return true;
        }
    }