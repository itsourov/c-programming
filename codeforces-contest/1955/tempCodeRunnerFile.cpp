  arr[l] -= temp;
        arr[r] -= temp;
        k -= (temp * 2);

        if (arr[l] == 0)
        {
            ans++;
            l++;
        }
        if (arr[r] == 0)
        {
            ans++;
            r--;
        }